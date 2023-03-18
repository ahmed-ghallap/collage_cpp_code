#include <iostream>

using namespace std;

bool is_lower(char l);

int main()
{
    cout << "Enter a letter: ";
    char letter;
    cin >> letter;
    if(is_lower(letter))
        cout << letter << " is in lower case\n";
    else 
        cout << letter << " is not\n";
}

bool is_lower(char l)
{
    if (l >= 'a' && l <= 'z')
        return true;
    return false;
}