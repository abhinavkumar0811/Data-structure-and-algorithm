#include <iostream>
#include <climits>
using namespace std;

int main(){

// find maximum and minium el in the array

int size_of_arr;
cout << "Enter size of arr: ";
cin >> size_of_arr;

int *arr = new int[size_of_arr];


int idx=0;
for (; idx<size_of_arr; idx=idx+1){
    
    cout << "Enter el for arr: ";
    cin >> arr[idx];
    
}

// finding the minimum and maximum el 

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

cout << "Second maximum element is: " << second_max_el << "\n";
cout << "Second minimum element is: " << second_min_el << "\n";

    return 0;
}