// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   
   


int arr[5];

int n = sizeof(arr) / sizeof(arr[0]);   // more protable way instead of this
int demo = sizeof(arr) / sizeof(int); // instead of this

// push manually el in the arr 
for(int item=0; item<n; item++){

    cout << "Enter el for push in arr array :: ";
    cin >> arr[item];
}


// by the array idicis
for(int el=0; el<n; el++){
    cout << arr[el] << " ";
}
cout  << "\n";
cout << "Enter arr el using pointer arthimetic " << endl;


// with the pointer arthimetic

int *p = arr;  // it will access the first el of the array 

for (int el=0; el<n; el++){
    cout << *(p+el) << " ";
}
cout << "\n";
cout << "Arr memo address using pointer " << "\n";


// with the pointer arthimetic memo add
for(int item =0; item<n; item++){
    cout << p+item<< " ";
}
cout << endl;
cout << "mem add using array idics" << "\n";


// for printing memo location 
for (int data=0; data<n; data++ ){
    cout << &arr[data] << " ";
}





    return 0;
}
