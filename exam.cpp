#include <iostream>

using namespace std;

enum tasks {
    CollectData = 0, Design, Implement, Test, Release
};

struct employee {
    string name;
    int id;
    tasks workLoad[3];
};

struct department {
    int depNumber;
    employee members[4];
};

void print(department dep);


int main(void)
{
    employee firstEmployee;
    firstEmployee.name = "Ahmed";
    firstEmployee.id = 232;
    firstEmployee.workLoad[0] = Design;
    firstEmployee.workLoad[1] = Implement;
    firstEmployee.workLoad[2] = Test;

    // for (tasks i = CollectData; i >= Implement; i=static_cast<tasks>(i + 1))
    //     firstEmployee.workLoad[i] = i;

    department firstDepartemnt;
    firstDepartemnt.depNumber = 3;
    firstDepartemnt.members[0] = firstEmployee;

    int points = 0;
    for (int i = 0; i < 3; i++)
    {
        points += firstEmployee.workLoad[i];
    }
    cout << "Points are " << points << endl;
    cout << "--------------\n";

    print(firstDepartemnt);
}

void print(department dep)
{
    cout << "Department Number is " << dep.depNumber;
    cout << endl;
    cout << "================\n";
    cout << "first Employee info: \n";
    cout << "Name: " << dep.members[0].name << endl;
    cout << "Id: " << dep.members[0].id << endl;
    cout << "Points: " << 6 << endl;// المفروض تتحسب 

}
