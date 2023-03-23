#include <iostream>

using namespace std;

enum week: int
{
    SAT = 0, SUN, MON, TUE
};
// enums are just ints
// SAT, SUN OR TUE are just constatn varibals


int main(void)
{
    // cout << TUE << '\n';
    for (int i = SAT; i < TUE; i++)
        cout << "*\n";
}