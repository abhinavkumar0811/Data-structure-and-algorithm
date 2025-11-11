#include <iostream>
using namespace std;


int main(){

    int age;
    
    cout << "Enter your age for cheacking your vote elegiblity: ";
    cin >> age;

    if(age >= 18){
        cout << "You'r elegible for voating" << endl;
    }
    else {
        cout << "Sorry you are not elegible for voating";
    }

    return 0;
}