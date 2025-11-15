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

 return 0;
}
