#include <iostream>

using namespace std;


int main()
{
    int cars[3][3];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cars[i][j] = i;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << cars[i][j] << ' ';
        }
        cout << '\n';
    }


}