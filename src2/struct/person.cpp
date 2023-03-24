// بسم الله الرحمن الرحيم 
#include <iostream>


using namespace std;

struct person {
    // ToDo home work
    string fname;
    string lname;
    int id ;
};

// prototypes for functions
void print(person p);
person get_person();

int main()
{
    person ahmed;
    ahmed.fname = "Ahmed";
    ahmed.lname = "Ghallap";

    // person muslim = get_person();
    
    print(ahmed);
    // print(muslim);
}

person get_person()
{
    person tmp;
    cout << "Enter First Name: ";
    cin >> tmp.fname;
    cout << "Enter Last Name: ";
    cin >> tmp.lname;
    cout << "ID: ";
    cin >> tmp.id;
    return tmp;
}












void print(person p)
{
    // ToDo
    cout << "Fist Name: " << p.fname << '\n';
    cout << "Last Name: " << p.lname << '\n';
    cout << "ID: " << p.id << '\n';
}