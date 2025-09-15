#include <iostream>
using namespace std;
void fibonacci(int n, int &a, int &b){
    if(n == 0){
        a = 0;
        b = 1;
        return;
    }
    fibonacci(n-1, a, b);
    int c = a + b;
    a = b;
    b = c;
}

int main(){
    //Write a Program for Fibonacci Numbers Using Recursion.
    int n;
    cout << "Enter the position of Fibonacci sequence: ";
    cin >> n;
    int a, b;
    fibonacci(n, a, b);
    cout << "Fibonacci number at position " << n << " is: " << a << endl;
    return 0;
}