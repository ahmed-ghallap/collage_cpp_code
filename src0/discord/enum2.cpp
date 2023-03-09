#include <iostream>

using namespace std;

enum week: int
{
    SAT = 0, SUN, MON, TUE
};

int main(void)
{
    // cout << TUE << '\n';
    for (int i = SAT; i < TUE; i++)
        cout << "*\n";
}