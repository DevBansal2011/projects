#include <iostream>
using namespace std;

int main(){
    //Write a Program to Check if Two Arrays Are Equal or Not.
    int arr1[100], arr2[100], n;
    cout << "Enter the size of the arrays: ";
    cin >> n;
    cout << "Enter elements of array 1: ";
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    cout << "Enter elements of array 2: ";
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    bool equal = true;
    for(int i = 0; i < n; i++){
        if(arr1[i] != arr2[i]){
            equal = false;
            break;
        }
    }
    if(equal)
        cout << "Arrays are equal." << endl;
    else
        cout << "Arrays are not equal." << endl;
    return 0;
}