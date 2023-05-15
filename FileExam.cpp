// بسم الله الرحمن الحيم
#include <iostream>
#include <fstream>

using namespace std;

struct  student
{
    int id;
    char first[20];
    char last[20];
    char gpa;
};

void print_file(fstream &file);
student get_id(fstream &file, int id);
void update_gpa(fstream &file, int id, char gpa);
int file_size(fstream &file);

// ToDo
// 1. read form text
// 2. save in program (ram) (var)


int main()
{
    fstream textf;
    fstream binaryf;

    textf.open("class.txt", ios::in); // ios::in for read only
    binaryf.open("class.dot", ios::out|ios::binary|ios::in);

    if (!binaryf.is_open())
    {
        cout << "Error opening\n";
        return 1;
    }


    string tmp;
    getline(textf, tmp);
    student s;
    while (!textf.eof())
    {
        textf >> s.id >> s.first >> s.last >> s.gpa;
        // wirte to binary file
        binaryf.write((char *) &s, sizeof(s));
    }

    cout << "the size is " << file_size(binaryf) << endl;

    textf.close();
    binaryf.close();
}

void print_file(fstream &file)
{
    file.seekg(0, ios::beg);

    student var;
    while(file)
    {
        file.read((char *) &var, sizeof(var));
        cout << var.id << " " << var.first << endl;
    }
}

student get_id(fstream &file, int id)
{
    id--;
    student var;
    file.seekg(sizeof(var) * id, ios::beg);
    file.read((char *) &var, sizeof(var));
    return var;
}

void update_gpa(fstream &file, int id, char gpa)
{
    student tmp = get_id(file, id);
    tmp.gpa = gpa;

    id--;
    file.seekp(sizeof(tmp) * id , ios::beg);
    file.write((char *) &tmp, sizeof(tmp));
}

int file_size(fstream &file)
{
    file.seekg(0, ios::end);
    return file.tellg();
}
