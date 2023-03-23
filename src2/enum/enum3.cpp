#include <iostream>

using namespace std;

enum week: int
{
    SAT = 0, SUN, MON, TUE
};

int main(void)
{
    week num;
    num = MON;
    cout << num << endl;
    num = SUN;
    cout << num << endl;
}