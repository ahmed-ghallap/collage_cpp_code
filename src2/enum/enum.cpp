// بسم الله الرحمن الرحيم
#include <iostream>

using namespace std;


enum week: int {
    SAT, MON , TUES, dkf, FR 
};

int main()
{
   for (int i = 0; i < 4; i = i + 1) 
        cout << "*\n";
   
   for (week i = SAT; i < FR; i = static_cast<week>(i+1))
        cout << "*\n";

}
