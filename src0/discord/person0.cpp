// بسم الله الرحمن الرحيم
#include <iostream>

using namespace std;

struct person {
    string name;
    string phone;
};

int main()
{
    person people[3];
    people[0].name = "ahmed";
    people[0].phone = "010131";

    people[1].name = "ali";
    people[1].phone = "10111";

    people[2].name = "morad";
    people[2].phone = "10111";

}