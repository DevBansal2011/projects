#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    //Write a Program to Swap Two Numbers Using a Function.
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    swapNumbers(x, y);
    cout << "After swapping: " << x << " " << y << endl;
    return 0;
}