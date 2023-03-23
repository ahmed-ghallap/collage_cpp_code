// بسم الله الرحم الرحيم
#include <iostream>

using namespace std;

void lower(string word);

int main()
{
    // get a word form user

    cout << "What's your name? ";
    string name;
    cin >> name;

    lower(name);
    cout << name;
}

void lower(string word)
{
    for (int i = 0; word[i] != '\0'; i++)
    {
        // if the char is lower
                // print it then skip
        if (word[i] >= 'a' && word[i] <= 'z')
            cout << (char) word[i];
        else
            cout << (char) (word[i] + 32);
    } 
    cout << endl;
}