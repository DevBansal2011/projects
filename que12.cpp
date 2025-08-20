#include <iostream>
using namespace std;

int main()
{
    // making a simple calculator
    int a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Result: " << a + b << endl;
        break;
    case '-':
        cout << "Result: " << a - b << endl;
        break;
    case '*':
        cout << "Result: " << a * b << endl;
        break;
    case '/':
        if (b != 0)
            cout << "Result: " << a / b << endl;
        else
            cout << "Error: Division by zero is not allowed." << endl;
        break;
    default:
        cout << "Error: Invalid operator." << endl;
        break;
    }

    return 0;
}