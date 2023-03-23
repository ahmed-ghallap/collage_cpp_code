#include <iostream>

using namespace std;

struct person
{
    string name = "Not Initlized";
    int visa_id = -1;
};

struct flight 
{
    int id = -1;
    string from;
    string to;
    person passanger[50];
    int duration;
};

person give(string name, int visa_id);
void print(flight tmp);



int main()
{
    flight bhi;

    bhi.from = "Alexandria";
    bhi.to = "Cairo";
    bhi.duration = 70;
    bhi.id = 1;
    
    bhi.passanger[0] = give("Ahmed", 92299);
    bhi.passanger[1] = give("Ali", 777);
    bhi.passanger[2] = give("Morad", 654);

    print(bhi);

}




person give(string name, int visa_id)
{
    person tmp;
    tmp.name = name;
    tmp.visa_id = visa_id;

    return tmp;
}

void print(flight tmp)
{
    cout << "The flight comes ";
    cout << "from " << tmp.from << " to " << tmp.to << endl;
    cout << "It will take " << tmp.duration << " minutes" << endl;
    cout << "====================\n";
    cout << "Passangers \n\n";
    for (int i = 0; (i < 50 && tmp.passanger[i].visa_id != -1 ); i++)
        cout << tmp.passanger[i].name << "\t" << tmp.passanger[i].visa_id << endl;
}