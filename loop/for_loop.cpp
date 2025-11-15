#include <iostream>
using namespace std;


int main(){

// Q1 write a program of prime number 

    
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






//     FOR LOOP — 10 Practical Questions

// Q2 Print numbers from 1 to 10
// ➤ Output: 1 2 3 4 5 6 7 8 9 10
for (int i = 0; i <=10; i++){
    cout << i << endl;
}

// Q2 Print the sum of the first N natural numbers
// ➤ Input: N = 5 → Output: 15


int number;

cout << "Enter number: ";
cin >> number;

    int sum = 0;
    int idx = 1;
    for (; idx <=number; idx++){
        sum += idx;
    }

cout << "Sum of n natural number is: " << sum << endl;


// Q3 Print all even numbers between 1 to 50

int number;

cout << "Enter number: ";
cin >> number;

    for (int counter=0; counter <=50; counter++){
        if(counter%2==0){
            cout << counter << endl;
        }
    }

// Q4 Print the multiplication table of a given number
// ➤ Input: 5
// ➤ Output: 5 10 15 20 25 30 35 40 45 50

int number;

cout << "Enter number: ";
cin >> number;

int first_itrate = 1;
int last_itrate = 10;

    for(; first_itrate <= last_itrate;  first_itrate++ ){
        cout << number << "x" << first_itrate << "=" << number*first_itrate << endl;
    }


// Q5 Find the factorial of a number using for loop
// ➤ Input: 5 → Output: 120

int number;
int factorial = 1;

cout << "Enter number: ";
cin >> number;

    for (int num=1;  num<=number;  num++){
        factorial = factorial * num;
    }

    cout << "factorial of number: " << number<< "is: " << factorial << endl;



// Q6 Print the reverse of a number
// ➤ Input: 1234 → Output: 4321

int  reversedNumber;

cout << "Enter number: ";
cin >> reversedNumber;

    int idx =1;
    for (;  idx <=reversedNumber;  reversedNumber--){
        cout << reversedNumber << endl;
    }

    

// Q6 Print Fibonacci series up to N terms
// ➤ Input: 6 → Output: 0 1 1 2 3 5


// Q7 Find the sum of digits of a number                     // -- logic vvi
// ➤ Input: 1234 → Output: 10

    int digit;
    cout << "Enter number: " ;
    cin >> digit;

    int sum = 0;

    while (digit >0){
        int last_el = digit%10;     // for finding the last element in digit (all digit %10) - reminder 
         sum += last_el;

        digit /= 10;            // this will return quetent 
        
    }
    cout << "Sum of all digit is: " << sum << endl;



    int digits = 1234;
    int result = digits%10;
    cout << result;


 



// int number;

// cout << "Enter number: ";
// cin >> number;

//     int sum = 0;
//     int idx = 1;
//     for (; idx <=number; idx++){
//         sum += idx;
//     }

// cout << "Sum of n natural number is: " << sum << endl;


// @8 Check if a number is prime or not using for loop








return 0;


}

