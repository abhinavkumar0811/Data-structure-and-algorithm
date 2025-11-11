#include <iostream>
using namespace std;

int main()
{



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