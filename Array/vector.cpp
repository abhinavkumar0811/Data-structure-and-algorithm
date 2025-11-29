#include <iostream>
#include <vector>
using namespace std;


int main(){

    //Q1  vector  all syntex
    vector <int> arr = {1,2,3,4,5};
    
    for (int item : arr){
        cout << item << " ";
    }
    cout << "\n";

    vector <int> twoArr(5,0);
    for (int item : twoArr){
        cout << item <<"\n";
    }

    vector <int> elArr;
    elArr = {1};
    elArr = {3,4,5,6,7,8};
    
    elArr.push_back(13);

    for (int item : elArr){
        cout << item << " ";
    }
    cout << "\n";


    //Q2 make a vector and intilize and print its value 
    int size_of_vector;
    cout << "Enter size of vector: ";
    cin >> size_of_vector;

    vector <int> arr(size_of_vector);   // pre allocate the size of vector

    for (int item=0; item<size_of_vector; item++){
        
        int value;
        cout << "Enter el for push in arr: ";
        cin >> value;
        arr.push_back(value);

    }

    cout << " Vector all elements are: " << endl;


    // useing for each loop
    // for (int item : arr){
    //     cout << item << " ";
    // }

    // using itrator base loop
    for (auto item = arr.begin(); item != arr.end(); ++item){
        cout << *item << " ";
    }


    cout << "\n";






    return 0;
}

