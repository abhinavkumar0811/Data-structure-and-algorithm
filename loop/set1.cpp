#include <iostream>
using namespace std;

int main(){
    

// 1–10: Basic Loops

 //Q1 Print numbers from 1 to N.

    for (int start=0,  end=10; start<=end; start=start+1){
        cout << start <<endl;
    }   // unary ++ post incriment work same like the addition 

    cout << "Q1 end here " << "\n";

// Print even numbers from 1 to N.
    for (int start=1, end=10; start <=end ; start++){
         if(start%2==0){
             cout << start << endl;
         }
    }

    cout << "end of @2" << endl;

//Q2 Print odd numbers from 1 to N.

    int number;
    cout << "Enter number: " ;
    cin >> number;

    int start=1;
    while(start <=number){
        if(start%2 !=0){
            cout << start << endl;
        }
            start++;
    }


//Q3 Print numbers in reverse from N to 1.

    int rev_number;     // store random number 
    cin >> rev_number;

     int  end=1;
    while(end <=rev_number){
        cout<< rev_number << endl;
        rev_number--;
    }
    


//Q4 Print all multiples of 3 up to N.

    int number;
    cin >> number;

    int start =1;
    while(start <=number){
        if(start%3==0){
            cout << start << endl;
        }
        start = start + 1;
    }

//Q5 Print all factors of a number.
      int number;
    cin >> number;

    int start =1;
    while(start <=number){   // possible number for divide this number
        if(number%start==0){
            cout << start << endl;
        }
        start = start + 1;
    }

//Q6 Count digits in a number.

    // hint - always remove the last digit and count it 

    int number;
    cin >> number;

    int count = 0;

    while (number>0){
        number = number / 10; // it will remove the last digit 

            count ++;
    }
    cout << number << endl;
    cout << count << endl;


//Q7 Find sum of digits.

//Q8 Find product of digits.

//Q9 Print table of a number.

//Q10 11–20: Loop Logic Practice

//Q11 Find factorial of a number.

//Q12 Find power (a^b) using loop.

// Count vowels in a string.

// Count consonants in a string.

// Reverse a string.

// Reverse a number.

// Check if a number is palindrome (using loop).

// Check if a string is palindrome.

// Print Fibonacci series up to N terms.

// Print sum of Fibonacci series.

// 21–30: Patterns Using Loops (Simple)

// Print a square pattern of stars.

// Print a right triangle pattern.

// Print a pyramid pattern.

// Print inverted triangle pattern.

// Print numbers in pattern form:

// 1
// 12
// 123


// Pattern of stars decreasing.

// Pattern of odd numbers.

// Pattern of alphabets.

// Pattern: print N rows of “* * * *”.

// Pattern: print hollow square.

// 31–40: Number Manipulation Using Loops

// Count primes between 1 and N.

// Find GCD using loop.

// Find LCM using loop.

// Count perfect numbers up to N.

// Print all prime numbers up to N.

// Find sum of all even numbers up to N.

// Find sum of all odd numbers up to N.

// Sum of series: 1 + 1/2 + 1/3 + … 1/N.

// Sum of squares: 1² + 2² + … + N².

// Sum of cubes: 1³ + 2³ + … + N³.

// 41–50: Function Based Loop Challenges

// Function to return the largest digit.

// Function to return smallest digit.

// Function to check if number is Armstrong (loop version).

// Function to count occurrences of a digit.

// Function to print characters from ASCII 65–90.

// Function to find the average of N numbers.

// Function to find max of N numbers using loop.

// Function to find min of N numbers using loop.

// Function to calculate compound interest using loop.

// Function to generate random numbers (manual loop logic) and print them.

    return 0;
}