#include <iostream>
using namespace std;

int main() {
    int a;
    bool itsprime = true;
    cout << "enter a number: ";
    cin >> a;

    if (a <= 1) {
        cout << a << " is not prime";
        return 0;
    }

    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            itsprime = false;
            break;
        }
    }

    if (itsprime)
        cout << a << " is prime";
    else
        cout << a << " is not prime";

    return 0;
}
