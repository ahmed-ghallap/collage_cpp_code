//  "بسم الله الرحمن الرحيم"
#include <iostream>
#include <cmath>

using namespace std;

enum mybool {
    my_false = 0 , my_true = 1
};

enum symbol: char {
      endline = '\n', nul = '\0'
};


int main() {

     mybool even = my_true;   
    
}

/*
    1- enums can be declared in the local scope.
    2- enum's names shoud have unique identifier.
    3- enums automaically initialized by the compiler
        - two or more names can have the same value
        - the next value = the previous one + 1
        - only integral values are allowed. can't be float
        - all enum constat must be unique in thier scope
*/