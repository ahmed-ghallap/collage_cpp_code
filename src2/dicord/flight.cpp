#include <iostream>

using namespace std;

struct person {
    string name = "not intilized";
    string phone;
    int id = -1;
};

struct flight {
    int id = -1;
    string from;
    string to;
    person passangers[30];
};

int main()
{
    flight bhi;
    bhi.from = "El bhera";
    bhi.to = "London";
    bhi.passangers[0].name = "Ahmed";
    bhi.passangers[0].phone = "8888";
    bhi.passangers[0].id = 88;
 


}