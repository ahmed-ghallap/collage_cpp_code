#include <iostream>

using namespace std;


struct flight 
{
    string from;
    string to;
    int time;
    string passangers[3];
};

void show(flight air);

int main()
{
    flight cairo;
    cairo.from = "cairo";
    cairo.to = "mka";
    cairo.time = 22;
    cairo.passangers[0] = "ahmed";
    cairo.passangers[1] = "ali";
    cairo.passangers[2] = "morad";

    show(cairo);
}

void show(flight air)
{
    cout << "from: " << air.from;
    cout << " to: " << air.to;
    cout << " time: " << air.time << endl;

    for (int i = 0; i < 3; i++)
        cout << "passanger " << i + 1<< ' ' << air.passangers[i]<< endl;
}