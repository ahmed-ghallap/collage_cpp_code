#include <iostream>

using namespace std;

int main()
{  
    // string char foo[]
    string foo = {'a', 'b' , '\0'}; // "ab"
    cout << (foo.size())<< endl;  
    char bar[] = "dkfja";
    cout << sizeof(bar);
}