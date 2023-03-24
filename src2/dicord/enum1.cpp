#include <iostream>

using namespace std;


enum cars {
    bmw, ford, kia
};

int main()
{
   
//    for (cars c = bmw; c < kia; c=c+1)

   for (cars c = bmw; c < kia; c=static_cast<cars>(c+1))// c++  c = c + 1
        cout << "😂\n";
}       