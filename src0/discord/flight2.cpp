#include <iostream>

using namespace std;

struct person
{
    string name = "no name";
    int id = 0;
};


struct flight 
{
    string from = "none";
    string to = "none";
    int time = 0;
    person passangers[3];
};

void show(flight air);

int main()
{
    flight cairo;
    cairo.from = "cairo";
    cairo.to = "mka";
    cairo.time = 22;
    cairo.passangers[0].name = "ahmed";
    cairo.passangers[0].id = 21;

    cairo.passangers[1].name = "ali";
    cairo.passangers[1].id = 454;

    cairo.passangers[2].name = "morad";
    cairo.passangers[2].id = 545;

    show(cairo);
}

void show(flight air)
{
    cout << "from: " << air.from;
    cout << " to: " << air.to;
    cout << " time: " << air.time << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "passanger name: " << air.passangers[i].name<< endl;
        cout << "passanger id: " << air.passangers[i].id<< endl;
        cout << endl;

    }
}