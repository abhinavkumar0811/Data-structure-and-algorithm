#include <iostream>
#include <climits>
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



//Q2 create a dynamic variable of array and allocate memory 

    int n;
    cout <<" Enter size of dyarr array: ";
    cin >> n;

    // dynamic arr 
    int* dyarr = new int[n];

    // access the no of el 
    int size_of_el = sizeof(dyarr) / sizeof(dyarr[0]);   // this will not
        //  accaptable in dy memory because it ref to pointer and pointer type is depends of the cpu architecture


    for (int el=0; el<n; el=el+1){

        cout << "Enter element for push in dynamic arr: ";
        cin >> dyarr[el];

    }


    // access all element using indics
    for (int el=0; el<n; el=el+1){
        cout<< *(dyarr+el) << " ";      //operator precidence concept - pending ( hight value priority )
    }
    cout << "\n";
    cout << "el memo add " << "\n";

    //access all add of dyarr el
    for (int add=0; add<n; add++){
        cout << dyarr+add << " ";
    }
    cout << endl;
    cout << "\n";


//Q3 find maximum and minium el in the array
    
    int size_of_arr;
    cout << "Enter size of arr: ";
    cin >> size_of_arr;
    
    int *arr = new int[size_of_arr];
    
    
    int idx=0;
    for (; idx<size_of_arr; idx=idx+1){
        
        cout << "Enter el for arr: ";
        cin >> arr[idx];
        
    }
    
    // min max 
    
    int min_el = INT_MAX;
    int max_el = INT_MIN;
    for(int item=0; item<size_of_arr; item++){
        
        if (min_el > arr[item]){
            min_el = arr[item];
        }
        
        if (max_el < arr[item]){
            max_el = arr[item];
        }
        
    }
    
    cout << "Minimum el of this elemennt is: " << min_el <<"\n";
    cout << "Maximum el of this elemennt is: " << max_el <<"\n";
    
    
    //Q4 find the second maxium and minimum el in array 
    
    int second_max_el = INT_MIN;
    int second_min_el = INT_MAX;
    
    for (int item=0; item<size_of_arr; item=item+1){
        
        if (arr[item] != min_el && second_min_el > arr[item]){
            second_min_el = arr[item];
        }
        
        if (arr[item] != max_el && second_max_el < arr[item]){
            second_max_el = arr[item];
        }
    }
    
//Q5 perform two sum of indics and return the el for target value
    
    int target = 9;
    
    

//Q6 convert a size of array from small to larger 

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




