#include <iostream>

void song(int times);

using namespace std;

int main()
{

    song(7);
    cout << '\n';
    song(7);
}

void song(int times)
{
    cout << "oh ";
    for (int i = 0; i < times; i++)
    {
        cout << "Ya Salam ";
    }
    cout << '\n';
}