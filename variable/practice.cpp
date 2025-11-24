#include <iostream>
using namespace std; 


int main (){

    // Q1 Variable Sizes

// Write a program that declares variables of all primitive types (int, short, long, float, double, char, bool) and prints:

int num;     // not intilized it store random num
short digit;  // not intilized it store random num
long longDigit; // not intilized it store random num
float floatDigit; // not intilized it store 0
double dubbleFloatDigit; // not intilized it store 0
bool isValid;        // default - zero
 char name;    // random char

cout <<num << endl;
cout << digit<< endl;
cout <<longDigit<< endl;
cout <<floatDigit << endl;
cout <<dubbleFloatDigit << endl;
cout <<isValid << endl;
cout <<name << endl;



// Their values

num = 4589;
digit = 334;
longDigit = 434252;
floatDigit = 343423.4;
dubbleFloatDigit = 3243.4234324243435454545215454565656767677664545435345;
isValid = true;
name = 'a';
 cout << "With intilized value " << endl;
cout <<num << endl;
cout << digit<< endl;
cout <<longDigit<< endl;
cout <<floatDigit << endl;
cout <<dubbleFloatDigit << endl;
cout <<isValid << endl;
cout <<name << endl;




//  Their memory sizes using sizeof()

cout << "Memory size of all the datatype" << endl;
    cout << sizeof(num) << endl;
    cout << sizeof(digit) << endl;
    cout << sizeof(longDigit) << endl;
    cout << sizeof(floatDigit) << endl;
    cout << sizeof(dubbleFloatDigit) << endl;
    cout << sizeof(isValid) << endl;
    cout << sizeof(name) << endl;




// Bonus: Try changing the values and see if the size changes (hint: it won’t).

// Q2. ASCII Conversion

// Create a program that:

// Takes a char input from the user

char charactor;
cout << "Enter A charactor for its ascii code: ";
cin >> charactor;
int  ascii_value = charactor;

// Prints its ASCII integer value
    cout << "Ascii code of : " << charactor << " is: " << ascii_value << endl;


// Adds 5 to it and prints the resulting character

char ascii_charactor = ascii_value + 5;
cout << "Ascii charactor of this ascii number is: " << ascii_charactor << endl;


// Q3. Implicit vs Explicit Casting

// Write a program that:

// Declares a float variable and assigns it a decimal value

    float float_num = 10.03;

// Converts it to int using implicit casting and prints it
    int num = float_num;
    cout << num << endl;

// Converts it to int using explicit casting and prints it

    int explicit_cast = static_cast <int>(float_num);
    cout << explicit_cast << endl;
    


// Q4. Unsigned / Signed Experiment

// Write a program that:

// Declares a signed int with a negative number

   signed int unsigned_num = -32424232;

// Declares an unsigned int with the same value
    unsigned int signed_num = -432434;    // here implict conversion perform
    

// Prints both and observes what happens

    cout << unsigned_num << endl;    // output -32424232
    cout << signed_num << endl;       // output 432434
 



//Q6 Memory Padding Demo              -- pending

// Create a struct like this:

// struct Demo {
//     char a;
//     int b;
//     char c;
// };


// Declare a variable of type Demo

// Print sizeof(Demo)

// Try reordering variables as int b; char a; char c; and print the size again

// Observe the difference due to padding


// Stack vs Heap

// Write a program that:

// Declares an int on the stack

// Dynamically allocates an int on the heap using new

// Assign values to both and print them

// Free the heap memory using delete

// Q7. Boolean Operations

// Write a program that:

// Declares two bool variables

// Performs AND, OR, XOR operations

// Prints results as true / false

// Q8. Floating Point Precision

// Write a program that:

// Declares a float and a double with the value 3.141592653589793

// Prints both with high precision using setprecision(15)

// Observe how float loses precision compared to double

// (9. Type Modifier Test

// Write a program that:

// Declares short, long, unsigned, and signed versions of int

// Prints their sizes and maximum values using numeric_limits<>

// Q10. Character Math

// Write a program that:

// Declares a char variable with 'A'

// Adds 5 to it

// Prints the resulting character

// Prints the ASCII code of the new character


// 1. VARIABLES — 100 PRACTICAL QUESTIONS

// Declare two integers and print their sum.

// Declare integer, float, char variables and print them.

// Swap two numbers using a third variable.

// Swap two numbers without using a third variable.

// Declare a constant PI and print its value.

// Take two integers input and print product.

// Declare a boolean and print its value.

// Print memory address of a variable using & operator.

// Create a global variable and print it in main().

// Create a local variable with same name as global and print both.

// Show variable shadowing inside a block.

// Create a static variable in a function and print how it behaves.

// Increment a variable inside a loop and print final value.

// Declare multiple variables in one line and print them.

// Store your name in a char array and print it.

// Declare a reference variable and print both values.

// Modify variable value through reference.

// Store ASCII code of ‘A’ in an int and print.

// Store 10 marks in 10 variables and print average.

// Demonstrate integer overflow.

// Demonstrate float overflow.

// Assign a double value to an int and show truncation.

// Print size of all fundamental variables using sizeof().

// Create a variable inside if block and access outside (show error).

// Reassign value to a variable and print both before/after.

// Show difference between initialization and assignment.

// Use auto to deduce type from a literal.

// Use auto with a complex expression.

// Create an external variable and access it in another file (conceptual).

// Show lifetime difference between static and normal variable.

// Create a register variable and print its value.

// Print value of uninitialized variable (observe).

// Create a volatile variable and increment it.

// Create a mutable variable inside class and modify inside const method.

// Create constexpr variable and print it.

// Use decltype to create another variable of same type.

// Create two same named variables inside two different blocks.

// Take 3 variables: int, float, char; print as formatted output.

// Convert Celsius to Fahrenheit using variables.

// Calculate area of circle using variable radius.

// Take principal, rate, time and compute simple interest.

// Count digits of a number using a variable.

// Find remainder and quotient of division.

// Show unsigned integer overflow.

// Store any big integer in long long.

// Create a char variable with ‘0’ and print numeric value.

// Create two variables and print which holds bigger value.

// Assign same value to 3 variables at once.

// Create variable for seconds and convert to hours.

// Track total salary of 5 workers using variables.

// Take marks of 5 subjects in separate variables and print percentage.

// Create a variable inside for loop initialization.

// Show how variable declared inside switch block works.

// Create a loop counter variable outside and inside loop.

// Change value of global variable inside function.

// Use static variable to count how many times function is called.

// Use variable to store user age and classify.

// Store month number and print number of days.

// Demonstrate integer division loss.

// Store today's date in three variables and print.

// Use char variable to store grade and print message.

// Check if character is vowel using variable flags.

// Store two time values and compute difference.

// Show memory address changes for different variables.

// Create dynamic variable using new (pointer).

// Create two reference variables for one integer.

// Change value through pointer and show effect.

// Print value using pointer and reference.

// Demonstrate narrowing conversion with int and float.

// Show type promotion result: int + double.

// Input radius and compute circumference.

// Store length and width and compute area.

// Store temp in Fahrenheit and convert to Celsius.

// Store minutes and convert to seconds.

// Track highest number entered by user using variable.

// Track lowest number using variable.

// Store speed & time and compute distance.

// Store number of days and print years.

// Create a counter using static variable inside loop.

// Use ternary operator to assign value to variable.

// Create 3 variables for marks and print grade.

// Store a large integer (1e12) and print.

// Copy value of one variable to another.

// Store base and height, compute triangle area.

// Store price and quantity and compute bill.

// Compare two string variables.

// Take year variable & check if leap year.

// Store weight and height and compute BMI.

// Compute speed = distance/time using float.

// Print default bool variable behavior.

// Store ASCII value in char and print symbol.

// Assign numeric value to char and print.

// Demonstrate variable hiding inside loop.

// Use volatile variable in infinite loop (demo).

// Store values of polynomial and evaluate expression.

// Modify global variable through pointer.

// Track sum of 10 inputs using a single variable.

// Track product of 10 inputs.

// Store two coordinates x,y and compute distance.

// Store marks and print pass/fail using boolean variable.


 return 0;

 
}