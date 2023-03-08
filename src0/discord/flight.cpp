#include <iostream>

using namespace std;


struct flight 
{
    string from;
    string to;
    int time;
};

void show(flight air);

int main()
{
    flight cairoAir;
    cairoAir.from = "Turke";
    cairoAir.to = "mka";
    cairoAir.time = 70;

    show(cairoAir);

    return 0;
}

void show(flight air)
{
    cout << "from: " << air.from;
    cout << " to: " << air.to;
    cout << " time: " << air.time << endl;
}