#include <iostream>

using namespace std;

struct person
{
    string name;
    int visa_id;
};



struct flight 
{
    int id;
    string origin;
    string destination;
    int duration;
    person passanger[50];
};

int main()
{
    flight cairoAir;
    cairoAir.id = 25;
    cairoAir.origin = "cairo";
    cairoAir.destination = "مكه";
    cairoAir.duration = 75;


    cairoAir.passanger[0].name = "احمد نزيه";
    cairoAir.passanger[0].visa_id = 2221;

    cairoAir.passanger[1].name = "احمد ";
    cairoAir.passanger[1].visa_id = 125;

    cairoAir.passanger[2].name = " نزيه";
    cairoAir.passanger[2].visa_id = 126;


    cout << "The fligh id: " << cairoAir.id << endl;
    cout << "the origin " << cairoAir.origin << endl;
    cout << "the destination " << cairoAir.destination << endl;
    cout << "مده الرحله" << cairoAir.duration << endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << "passanger " << i + 1<< " Name: " << cairoAir.passanger[i].name << endl; 
    }
}