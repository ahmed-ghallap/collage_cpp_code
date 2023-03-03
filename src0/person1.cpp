// بسم الله الحمن الرحيم

#include <iostream>

using namespace std;

struct person 
{
    string name;
    string phone_num;
    int id;
};

int main()
{
    person ahmed;
    ahmed.name = "Ahmed Mohamed";
    ahmed.phone_num = "01013566172";
    ahmed.id = 22249;

    person ali;
    ali.name = "Ali ali";
    ali.phone_num = "012";
    ali.id = 5565;

    person people[3];
    people[0].name = "Morad"
    people[0].phone_num = "019";


    people[1] = ali;

    people[1].name = ali.name;
    people[1].phone_num = ali.phone_num;
    people[1].id = ali.id;
    
    
    return 0;
}