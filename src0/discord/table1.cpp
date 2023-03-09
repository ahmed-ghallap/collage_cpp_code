#include <iostream>

using namespace std;


struct person
{
    string name = "None";
    int id = 10;
};

void show(person arr[]);

int main(void)
{
    person student1;
    student1.name = "MOHAMED";
    student1.id = 229;

    person students[4];
    students[0].name = "ahmed";

    students[1] = student1;   

    show(students); 

}

void show(person arr[])
{
    for (int i = 0; i < 4; i++)
        cout << arr[i].name << '\t' << arr[i].id << '\n';
}


