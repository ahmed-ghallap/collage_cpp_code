#include <iostream>
#include <fstream>

using namespace std;

int file_size(fstream &file);

struct customer
{
    int customerNo;
    char first[30];
    char last[30];
    float balance;
};


int main()
{
    fstream textf;
    fstream binaryf;

    textf.open("customer.text", ios::in);    
    binaryf.open("customer.dot", ios::out);

    if (!textf.is_open() || !binaryf.is_open())
    {
        cout << "Error in opening files\n";
        return 1;
    }

    string s;
    getline(textf, s);

    customer tmp;
    while (textf)
    {
        textf >> tmp.customerNo >> tmp.first >> tmp.last >> tmp.balance;
        cout << tmp.customerNo << " " << tmp.first << " " << tmp.last << " ";
        cout << tmp.balance << endl;

        binaryf.write((char *) &tmp, sizeof(tmp));
    }

    int bianryf_size = file_size(binaryf);
    cout << "The size is " << bianryf_size << endl;


    binaryf.seekg(50, ios::beg);
    binaryf.seekp(0, ios::end);

}

int file_size(fstream &file)
{
    file.seekg(0, ios::end);
    return file.tellg();
}