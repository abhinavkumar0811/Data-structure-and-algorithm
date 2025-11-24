#include <iostream>
using namespace std;

int main(){



    // implicit conversion - autometic change the type based on the data by the complier
    int a = 45;
    float b = 56.6f;
    double result = a + b;
    cout << "Sum of total a and b : " << result << endl;



    // explicit conversion - convert manually by programmer 
    
   
   
   
    // static type - Used for common conversions that are known at compile time.
    int num = 5;
    int deviser = 2;
    float result2 = static_cast <float> (num) / (deviser);
    float result3 = num / deviser;
    cout << "the result of num devided by deviser: " << result2 <<"\n";
    cout << "Without implicit we can devide it " << result3 << endl;
    


    // size of operator 
    cout << sizeof result3;

    // for viewing memory address
    cout << &result3;




    // another all are pending due to fluxcuations
    cout << "test@123" << "\n";


// Input an int and store it in a float variable, print the result.

// Input a float and convert it to int using (int) cast, print result.

// Convert a char digit (‘5’) to int 5 using ASCII subtraction.

// Input an integer and convert it into a double variable.

// Input a double and store it in an int, observe precision loss.

// Convert a lowercase char to uppercase using (char)(ch - 32).

// Input hours as float and convert to integer hours.

// Convert Celsius (float) to Fahrenheit (float → float).

// Convert a float price into an integer after rounding.

// Convert integer to long long and print both.

// Convert a number from string to int using stoi().

// Convert a decimal string “12.45” to float using stof().

// Convert integer to string using to_string().

// Convert float to string and print it.

// Convert char variable to integer ASCII code.

// Convert ASCII code (int) to a character.

// Convert float marks to an integer percentage.

// Convert a large number input as string to long long using stoll().

// Convert minutes (int) to seconds (long).

// Convert an int to a bool and print it.

// Input a number as double and convert to int using floor().

// Input float and print ceil, floor, round conversions.

// Convert an int into unsigned int and print.

// Convert long long to double and print.

// Convert double to long long using cast.

// Convert character to uppercase using toupper().

// Convert uppercase to lowercase using tolower().

// Convert float to int without rounding (truncate manually).

// Convert two integer inputs to float before division.

// Convert a binary digit in char form to integer (e.g., '1' → 1).

// B. MEDIUM LEVEL (31–70)

// Mixing datatypes, promotion rules, arithmetic conversions.

// Add an int and a double and print the resulting type effect.

// Multiply char and int and show ASCII-based result.

// Add two characters and print sum as integer and char.

// Convert a float to string with 2 decimal places using ostringstream.

// Convert string “101” to integer 101.

// Convert integer 65 to ASCII character using cast.

// Convert number to scientific notation using formatting.

// Convert an integer to binary string using manual division method.

// Convert binary string to decimal integer manually.

// Convert hexadecimal string “1A3” to integer using stoi(value,0,16).

// Convert octal string “123” to decimal using stoi(value,0,8).

// Demonstrate implicit type promotion in char + float + int.

// Convert long double to double and compare precision.

// Convert double to float and demonstrate precision loss.

// Convert negative integer to unsigned int and print value.

// Convert string to long double using stold().

// Convert integer to char, then to string.

// Convert a fraction (numerator, denominator) to a float.

// Convert float hours to minutes (float → int).

// Convert kilometers (float) to meters (int).

// Convert string containing large number into unsigned long long.

// Convert integer to binary using bit operations.

// Convert binary (int) into decimal using repeated division.

// Convert float marks (upto 100) to a grade character.

// Convert string input of comma-separated ints to vector<int>.

// Convert double division result to string with fixed precision.

// Convert a char containing number to actual int using isdigit().

// Convert two strings “12” and “34” to integers and do addition.

// Convert integer to hex string using stringstream.

// Convert a hex string back to integer using stringstream.

// Convert float to integer after multiplying by 100 (money format).

// Convert ASCII code to printable char if valid.

// Convert upper alphabet to its alphabetical position (A=1).

// Convert decimal to hexadecimal manually.

// Convert hexadecimal to decimal manually.

// Convert float seconds to formatted hour:minute:second.

// Convert integer to binary using bit shifting.

// Convert float minutes to hours in int and fraction form.

// Convert float into scientific form without using formatting functions.

// Convert string to boolean (e.g., “true” → true).

// C. ADVANCED LEVEL (71–100)

// Covers complex conversions, overflow, custom parsers, type promotion rules.

// Demonstrate integer overflow when converting long long to int.

// Demonstrate float overflow when converting double to float.

// Convert a very large integer string (50 digits) to integer manually (digit-by-digit).

// Convert decimal to binary using bitwise AND & shifts.

// Convert decimal to octal manually.

// Convert octal to decimal manually.

// Convert double to string using manual parsing (no library).

// Convert a custom string fraction “12/7” to float manually.

// Implement manual stoi() that ignores spaces and symbols.

// Convert float seconds to HH:MM:SS string manually.

// Convert angle in degrees to radians (double → double).

// Convert a 64-bit binary string into unsigned long long.

// Convert a 32-bit hex string into an integer manually.

// Convert integer to char array without using to_string().

// Convert scientific notation string “1.23e5” to double manually.

// Convert floating-point value to fixed-point integer (store money in paisa).

// Convert double to string with custom precision logic.

// Convert long double to string with full precision.

// Demonstrate type promotion in expressions with all primitive types.

// Convert from ISO time string “2025-11-23” to int year, month, day.

// Convert decimal number to roman numerals string.

// Convert roman numeral back to integer.

// Convert integer array to string format like “[1,2,3]”.

// Convert formatted string “[1,2,3]” back to vector<int>.

// Convert an IPv4 string “192.168.0.1” to 32-bit integer.

// Convert that 32-bit integer back to IPv4 string.

// Detect and prevent overflow when converting int to short.

// Implement safe conversion: string → long long, with error handling.

// Convert string “true/false” to int (1/0) manually.

// Parse a CSV line into different typed variables (int, float, string).




    return 0;

}
