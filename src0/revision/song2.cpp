#include <iostream>

//المترجم ينظر الي الكود من فوق الي اسفل ومن اليسار الي اليمين
void song(int times); 

using namespace std;

int main()
{
    // استخدام الدوال
   song(3);
}

void song(int times)
{
    for (int i = 0; i < times; i++)
    {
        cout << "Ya Salam\n";
    }
}