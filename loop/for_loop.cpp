#include <iostream>
using namespace std;


int main(){

//FOR LOOP — 10 Practical Questions

// Q1 Print numbers from 1 to 10
// ➤ Output: 1 2 3 4 5 6 7 8 9 10
for (int num = 1; num <=10; num++){
    cout<< num <<endl;
}


// @2 Print the sum of the first N natural numbers
// ➤ Input: N = 5 → Output: 15

// natural number are all the positive number start with 1 and go n 

cout << "Sum of natural number counter" << endl;

int naturalNumber;
int sumOfNaturalNumber = 0;

cout << "Enter number for sum: ";
cin >> naturalNumber;

for (int count = 1; count <=naturalNumber; count++){
    sumOfNaturalNumber += count;
}

cout << "Sum of natural number: " << naturalNumber << " is: " << sumOfNaturalNumber;

// Q3 Print all even numbers between 1 to 50

// with loop
int startNumber = 1;
int finalNumber =50;
for(; startNumber <=finalNumber; startNumber++){
    
    if(startNumber % 2 == 0){
        cout << "Even number: " << startNumber << endl;
    }
}


// for finding n number even/odd number 
cout << "Even number printer" << endl;

int number;

cout << "Enter number for cheack even number: ";
cin >> number;

if (number%2==0){
    cout << "This number is even number" << number << endl;
}
else{
    cout << "This number is not even number" << number << endl;

}


// Print the multiplication table of a given number
// ➤ Input: 5
// ➤ Output: 5 10 15 20 25 30 35 40 45 50

// Print the multiplication table of a given number
// ➤ Input: 5
// ➤ Output: 5 10 15 20 25 30 35 40 45 50

cout << "Table counter" << "\n";

int tableOfNumber;
cout << "Enter table number: ";
cin >> tableOfNumber;

for(int table=1;  table<=10; table++){
    cout << tableOfNumber << "x" << table << "=" << tableOfNumber*table << "\n";
}

// Find the factorial of a number using for loop
// ➤ Input: 5 → Output: 120

// Print the reverse of a number
// ➤ Input: 1234 → Output: 4321

// Print Fibonacci series up to N terms
// ➤ Input: 6 → Output: 0 1 1 2 3 5

// Find the sum of digits of a number
// ➤ Input: 1234 → Output: 10

// Check if a number is prime or not using for loop


}