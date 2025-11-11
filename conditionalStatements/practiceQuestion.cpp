#include <iostream>
using namespace std;

int main()
{

    // Q1. Even or Odd
    // Write a program to check whether a number entered by the user is even or odd using if-else.

    int number;
    cout << "Enter number for cheack wheather number is even or odd: ";
    cin >> number;

    if (number%2==0){
        cout << "This number " << number <<  " is Even number" << "\n";
    }else{
        cout << "This number " << number <<  " is Odd number" << "\n";

    }

    // Q2. Maximum of Two Numbers
    // Take two numbers from the user and find the greater number using the ternary operator (?:).
       
    int number1;
    int number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    // int greatestNumber = (number1 > number2)?  number1 : number2 ;
    // cout << "greatest number is " << greatestNumber <<endl;   - if the value is the same datatype then it will store 

    // if the data will not in both type then it will not store print it 

    (number1 > number2)?
                        cout << "The greatest number between " << number1 << " and " << number2 << " is: " << number1
                        : cout << "Greatest number betweeen " << number1 << " and " << number2 << " is: " << number2 << "\n"; 
                                                                       

    // Q3. Positive, Negative, or Zero
    // Check whether a number is positive, negative, or zero using if-else-if.

    int num;

    cout << "Enter number of cheack positive negative or Zero: ";
    cin >> num;

    if (num == 0){
        cout << "This number is Zero: " << num << endl;
    }
    else if (num > 0){
        cout << "This number is postive number: " << num << endl;
    }
    else{
        cout << "This number is negative number: " << num << endl;
    }
    

    // Q4. Voting Eligibility
    // Take a person’s age as input and check if they are eligible to vote (age ≥ 18).

    // Q5. Grade Calculation

    // Input marks (0–100) and print the grade using the following rules:

    // >=90: Grade A

    // >=75: Grade B

    // >=50: Grade C

    // <50: Fail

    // Use if-else-if ladder.

    // Q6. Simple Calculator

    // Build a simple calculator using switch.
    // Input: two numbers and an operator (+, -, *, /)
    // Output: the result of the operation.

    // Q7. Leap Year Check

    // Write a program to check if a given year is a leap year or not.
    // Conditions:

    // Divisible by 4 → leap year

    // But if divisible by 100 → not a leap year

    // Unless divisible by 400 → leap year again

    // Use nested if.

    // Q8. Character Type Checker

    // Input a character and check whether it is:

    // An alphabet,

    // A digit, or

    // A special character.

    // Use if-else-if.

    // Q9. Day of the Week

    // Write a program that takes a number (1–7) and prints the day name using switch.
    // (1 = Monday, 2 = Tuesday, etc.)

    // Q10. Largest of Three Numbers

    // Take three integers from the user and print the largest one using nested if or logical operators (&&).

    // Example Input:

    return 0;
}