// بسم الله الرحمن الرحيم
#include <iostream>

using namespace std;

bool is_small(char l);
bool is_upper(char l);
bool is_alpha(char letter);

int main()
{

    char null = '\0';
    string name = "Ahm d";
// cstring
    for (char i = 0; name[i] != '\0' ; i++)
    {
        if (!is_alpha(name[i]))
            {
                cout << name[i];
                continue;
            }
        if (is_small(name[i]) )
            cout << name[i];
        else
            cout << (char) (name[i] + 32) ;
    }
    cout << '\n';

}

bool is_small(char l)
{
    if (l >= 'a' && l <= 'z')
        return true;
    return false;
}
bool is_upper(char l)
{
    if (l >= 'A' && l <= 'Z')
        return true;
    return false;
}

bool is_alpha(char letter)
{
    if (is_upper(letter) || is_small(letter))
        return true;
    return false;
}