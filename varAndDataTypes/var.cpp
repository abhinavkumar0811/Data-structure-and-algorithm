// we can see the intilization style in c++

// there are total four type of intialization style
// 1 default initilization - it will store random number and anything during only intilize
// 2 copy     || - it will copy the another value 
// 3 direct ||
// 4 uniform ||


// default initilization - it will store random number and anything during only intilize
#include <iostream>
using namespace std;

int main(){
    
    int rollNumber;
    cout<< rollNumber <<"\n";
    // Compiler reserves memory for a, but doesn’t initialize it.
    // So a contains garbage value (random bits) from RAM.
    
    
    
    
    // copy     || - Copy initialization is when you declare a variable and assign a 
    // value to it using =, so the value is copied into the variable’s memory.
    int roll = 13;
    cout << roll <<endl;
    
    
    
    
    
    // direct || - Direct initialization is when you initialize a variable at the time of declaration using parentheses ().
    // the value is directly placed into the memory of the variable.
    
    int number(342);
    cout << number << "\n";
    
    //  Compiler allocates memory for the variable.
    //  Then it directly stores the value into that memory.
    //  Works for both primitive types and objects (constructors).
    
  
    



    // uniform || - introduced in C++11, uniform initialization uses curly braces {} to initialize variables.
              // It is safe and consistent, works for primitive types and objects, and prevents narrowing conversions.

    char name{'a'};
    cout << name << endl;

    // Compiler allocates memory for the variable.
    // Value inside braces is directly stored in memory.






    return 0;
}





