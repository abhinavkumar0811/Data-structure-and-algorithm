#include <iostream>
using namespace std;

int main() {


//Q1  Program Showing Static Array Elements and Their Memory Addresses Using Pointer Arithmetic   

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


//  perform two sum of indics and return the el for target value

int target = 9;






    return 0;
}



// Declare a static array of 5 integers and initialize it with values. Write a program to print each element using a pointer.

// What is the difference between int arr[5]; and int *ptr = arr;? Explain with an example.

// Using a pointer, write a program to find the sum of all elements in a static array of 10 integers.

// Intermediate Questions

// Write a program to reverse a static array using pointer arithmetic (without using array indexing).

// Given int arr[5] = {1,2,3,4,5};, what is the output of *(arr + 2) and why?

// Explain the difference between a pointer to an element and a pointer to an array. Illustrate using code:

// Intermediate Questions

// Write a program to reverse a static array using pointer arithmetic (without using array indexing).

// Given int arr[5] = {1,2,3,4,5};, what is the output of *(arr + 2) and why?

// Explain the difference between a pointer to an element and a pointer to an array. Illustrate using code:

// int arr[5] = {10,20,30,40,50};
// int *p1 = arr;       // Pointer to first element
// int (*p2)[5] = &arr; // Pointer to whole array

// Advanced Questions

// Write a program using a pointer to an array (int (*ptr)[5]) to increment each element of a static array by 10.

// Consider this code snippet:

// int arr[5] = {1,2,3,4,5};
// int (*ptr)[5] = &arr;
// ptr++;
// cout << (*ptr)[0] << endl;


// Explain why this may print a garbage value.

// Explain pointer arithmetic on arrays:

// What happens when you do p++ for int *p = arr;?

// What happens when you do ptr++ for int (*ptr)[5] = &arr;
// Write a function that takes a pointer to an array of 5 integers as an argument and prints its elements.