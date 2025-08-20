#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
