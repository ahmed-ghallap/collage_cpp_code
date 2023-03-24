#include <iostream>

using namespace std;

struct person {
    string name = "not intilized";
    string phone;
    int id = -1;
};
void print(person p);
int main()
{
    person tmp;
    tmp.name= "akdf";

    print(tmp);
}

void print(person p)
{
    cout << "Name is " << p.name << endl;
    cout << "phone is " << p.phone << endl;
    cout << "id is " << p.id << endl;
}