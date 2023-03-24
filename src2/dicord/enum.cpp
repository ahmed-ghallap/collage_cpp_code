#include <iostream>

using namespace std;


enum foo {
    bar = 74, baz // 
};

enum cars {
    bmw, ford, kia
};

int main()
{
    foo num = baz;
    cout << num << endl;
}