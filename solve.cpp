#include <iostream>
using namespace std;


int main(){

// // find the unique number in the array 

// int p[5] = {1,2,1,2,4};
// int size = sizeof(p) / sizeof(p[0]);

// int unique_el = 0;
// bool isunique_el = true;

// for (int item=0; item<size; item=item+1){

//     for (int el=0; el<size;  el++){

//         if (item !=el &&  p[item] == p[el]){
            
//             isunique_el = false;
//             break;
//         }


//         if(isunique_el){
//             unique_el = p[item];
//         }
//     }
// }

// cout << unique_el;




// convert a size of array from small to larger 
// concept - growth and resizing 
// step - reallocate, copy old el, delete old block, update your pointer to point the new block 

// current array 
int *arr = new int[4];
int temp[4] = {3,5,6,7};
copy(temp, temp+4, arr);  // std:: copy - method


// current arr value 
cout << "This is the current element of arr" << "\n";

for(int item=0; item<4; item++){
    cout << arr[item] << " ";
}
cout << "\n";


// intilize new value 

// reallocate 
int size;
cout << "Enter size of new array: ";
cin >> size;

int *newarr = new int[size];

// copy old arr el to new array 
for (int item=0; item<4; item++){
    newarr[item] = arr[item];

}

// it will return garbage value where we not give the el  
// make garbage value to 0
int item =4; // or make item == size of array which store for dynamic 
for (; item<size; item=item+1){
    newarr[item] = 0;
}

// free old arr block 
delete[] arr;
arr = newarr;


cout << "current array el" <<"\n";
// print current el 
for (int item=0; item<size; item++){
    cout << arr[item] << " ";
}
cout <<"\n";




return 0;
}

// // while loop best for known number
// int item =0;
// while (item<size){

//     cout << "Enter element for new array: ";
//     cin >> newarr[item];

//     item = item + 1;

// }
