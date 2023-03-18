#include <iostream>

using namespace std;



void lower(string word);
int len(string word);

int main()
{
    //AHMED Ahmed aHmEd ahmed Ahmed!
    // ahmed ahmed!

    // get name from user
    cout << "What's your name? ";
    string name;
    getline(cin, name);
    lower(name);
     
}

void lower(string word)
{
    // my name is ahemd.
    // call by refrence
    // '\0' == '.'
    for (int i = 0; word[i] != '\0'; i++)
    {
        // if the char was small or 
                // print it and skip
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            cout << (char) (word[i] + 32);
            continue;
        }
        cout << word[i];

    }
    cout << endl;
}

int len(string word)
{
    int i;
    for ( i = 0; word[i] != '\0'; i++);
    return i;
        
}