#include <iostream>
using namespace std;


int main(){

// write a program of prime number 

    
    int value;
    bool isPrimeNumber = true;

    cout << "Prime number cheacker" << endl;


    cout << "Enter number for check prime number: ";
    cin >> value;

    // prime number condition number is devided by itself and by 1 is prime number
    
    if (value == 0 or value == 1){
        cout << "This number is not a prime number: " << value <<endl;
        // break;
    }

    int idx = 2;
    while (idx <= value-1){
        
        if (value%idx==0){   // 2/2 
            isPrimeNumber = false;
            break;
        }

        idx++;
    }

    if (isPrimeNumber == false){
        cout << "This number is not a prime number: " << value <<endl;
    }
    else {
        cout << "This number is a prime number: " << value <<endl;
    }






return 0;


}
