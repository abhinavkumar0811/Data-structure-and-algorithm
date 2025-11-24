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


//     Basic loop usage, counting, summation, iteration.

// Print numbers from 1 to 100 using a for loop.

// Print numbers from 100 to 1 using a while loop.

// Print all even numbers between 1 and 50.

// Print all odd numbers between 1 and 100.

// Print multiplication table of a number using for loop.

// Print first 10 natural numbers using do-while.

// Print sum of numbers from 1 to N.

// Print factorial of a number using loop.

// Print Fibonacci series up to N terms.

// Count digits in a number.

// Reverse a number using loop.

// Print sum of digits of a given number.

// Print product of digits of a number.

// Count how many even digits in a number.

// Count how many odd digits in a number.

// Print all numbers divisible by 3 between 1 and N.

// Print squares of numbers 1 to N.

// Print cube of numbers 1 to N.

// Print characters A to Z.

// Print ASCII values of A–Z.

// Print sum of even numbers between 1 and N.

// Print sum of odd numbers between 1 and N.

// Check if a number is prime using loop.

// Print all prime numbers between 1 and 100.

// Print HCF of two numbers using loop.

// Print LCM of two numbers using loop.

// Print a number N times on screen.

// Print "Hello" 50 times.

// Print digits of a number one by one using while loop.

// Check if a number is palindrome using loops.

// B. MEDIUM LEVEL (31–70)

// Nested loops, pattern problems, advanced counting, sequence logic.

// Print a square pattern of stars (n x n).

// Print a right triangle star pattern.

// Print an inverted right triangle star pattern.

// Print a pyramid star pattern.

// Print inverted pyramid star pattern.

// Print numbers in square pattern (1 repeated n×n).

// Print 1–n in each row using nested loops.

// Print Floyd’s Triangle.

// Print Pascal’s Triangle using loops.

// Print a hollow square pattern.

// Print multiplication table from 1 to 10.

// Print all Armstrong numbers between 1 and 1000.

// Print factorial for each number from 1 to N.

// Find Nth Fibonacci term without array.

// Find greatest digit in a number using loop.

// Find smallest digit in a number using loop.

// Print count of digits that are prime (2,3,5,7).

// Print sum of digits until it becomes single digit (digital root).

// Generate first N prime numbers.

// Print numbers from 1 to N skipping multiples of 3.

// Print numbers from 1 to N skipping 3 and 7.

// Count how many digits are divisible by 3.

// Count frequency of each digit in a number (0–9).

// Take N numbers as input and print how many are positive/negative/zero.

// Print sum of N input values.

// Print average of N input integers.

// Take 10 numbers and print maximum & minimum.

// Print reverse of a string using loop.

// Count vowels and consonants in a string using loop.

// Count total spaces in given input string.

// Print all factors of a number.

// Check if number is perfect square using loop.

// Find GCD of two numbers using Euclid’s loop method.

// Generate random 5-digit OTP using loops.

// Compare each character of two strings using loop.

// Count uppercase and lowercase letters in a string.

// Convert a string to uppercase manually using loop.

// Convert a string to lowercase manually using loop.

// Replace all spaces in a string with underscores using loop.

// Print alternating 0 and 1 pattern for n rows.

// C. ADVANCED LEVEL (71–100)

// Complex pattern problems, nested loops, simulation, multi-loop logic.

// Print butterfly pattern using nested loops.

// Print diamond star pattern.

// Print hollow diamond star pattern.

// Print number triangle increasing from left.

// Print number triangle decreasing from left.

// Print palindrome pyramid using numbers (e.g., 1 2 3 2 1).

// Print alphabetical pyramid (A, AB, ABC...).

// Print alphabetical inverted pyramid.

// Print hollow pyramid using nested loops.

// Print binary pyramid (1, 10, 101, 1010...).

// Generate prime spiral pattern (matrix).

// Simulate ATM menu using loops until user exits.

// Take input until user enters -1 and compute average.

// Simulate login system with 3 attempts limit.

// Implement number guessing game using loops.

// Input numbers until sum exceeds 1000 and print count.

// Generate multiplication chart 1–20 using nested loops.

// Check if a number is Armstrong for any number of digits (general logic).

// Print all twin primes between 1 and N.

// Print all perfect numbers between 1 and N.

// Find the smallest prime greater than N.

// Print all palindromic numbers between 1 and N.

// Print all numbers whose digits strictly increase.

// Print all numbers whose digits strictly decrease.

// Count how many numbers 1–N have equal even & odd digit count.

// Simulate elevator moving floors using loop (input commands).

// Generate and print matrix N×N filled with numbers 1…N².

// Print matrix in spiral order using loops.

// Convert decimal to binary manually using loops.

// Convert binary to decimal manually using loops.



return 0;


}
