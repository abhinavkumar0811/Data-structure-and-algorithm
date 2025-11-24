#include <iostream>
using namespace std;


// A function is a block of reusable code 

// A function is a block of code that performs a specific task. It allows you to:
// Break down complex problems into smaller, manageable tasks.
//             Avoid code repetition.
//             Make your program modular and easier to debug.

// syntex :-

// return_type functionName (parameter) {       -- function defination
//     // code 
// }

// functionName(arguments )     function call 
// functionName   function refrence 


// parameter - a paramenter which accept the value from the arguments in function declearion

// type of paramenter 

// pass by value -
// Pass-by-value means the function receives a copy of the argument, so any changes made to the parameter do not affect the original variable.
int addition(int a=4, int b=4){     // a and b have set the defult value 4 and 4
   
        return a + b;
    
}



int main(){


    // pass by value parameter 
    int a = 45;    // original value do not effect by the parameter vlaue 
    int b = 20;    // original value do not effect by the parameter value 
     int result = addition(a,b);  
    cout << result << endl;


}




