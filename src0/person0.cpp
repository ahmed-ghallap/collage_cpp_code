// بسم الله الحمن الرحيم
#include <iostream>

using namespace std;

int main()
{
    string names[] = {"Ahmed", "Ali", "Asmaa"};
    string phones[] = {"010135733", "012123394", "011332240"};

    for (int i = 0; i < 3; i++)
    {
        cout << "The Name: " << names[i] << endl;
        cout << "the phone number: " << phones[i];
        cout << "\n\n\n";
    }
    
    return 0;
}