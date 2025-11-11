// Types of variable 
// Local variable 
// Global variable
// Static variable
// Dynamic variable
// Constant variable



#include <iostream>
using namespace std;


// Global Variables
// Declared outside all functions.
// Memory: Global/Static segment
// Lifetime: Entire program
// Default initialized to 0 (for int/float) or nullptr (for pointers)

// Global Variables
int numbers = 99;


// Static Variables
void counter(){
   static int value = 0;
    value +=1;

    cout << value << endl;
    // return value;`

}

int main(){
    
    // Local Variables
    // Declared inside a function or block.
    // Memory: Stack
    // Lifetime: Until function/block ends
    // Default initialization: garbage (if primitive type)
    // Only accessible inside function/block.
    
    // Local Variables
    bool isVarified = true;
    cout << isVarified << "\n";
    
    
    // Global Variables
    cout << numbers << endl;


    
    // Static Variables
    // Can be local or global
    // Lifetime: Entire program
    // Retains value across function calls
    
    // Static Variables
    static bool isNotVarified{false};
    cout << isNotVarified << "\n";
    counter();  // counter 1
    counter();  // counter 2
    counter();  // counter 3
    counter();  // counter 4 
    counter();  // counter  5
    

    
    //     Dynamic Variables
    // Created at runtime using new (or malloc in C)
    // Memory: Heap
    // Lifetime: Until deleted manually
    // Useful when size unknown at compile time
    
    
        //   -- Pending

    return 0;
    



}