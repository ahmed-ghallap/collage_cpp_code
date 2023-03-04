#include <iostream>

using namespace std;

struct flight 
{
    int id;
    string origin;
    string destination;

};

int main(void)
{
    flight cairoAir;
    cairoAir.id = 1;
    cairoAir.origin = "cairo";
    cairoAir.destination = "مكه";
}