#include <iostream>
using namespace std;


int main(){


 int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int row = 3;
    int column = 4;
    
// print all the el 
for (int item=0; item<row; item=item+1){
    
    for(int el=0; el<column; el=el+1){
        cout << el<<  item << endl;
    }
}



}



