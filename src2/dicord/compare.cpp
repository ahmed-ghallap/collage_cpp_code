#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout << "Name: ";
    char name[50];
    cin >> name;

    if (name == "foo")
        cout << "you enterd foo\n";
    else
        cout << name << endl;
}