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





    return 0;

}
