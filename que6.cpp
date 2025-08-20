#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    double principal, rate, time, interest;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    double A = principal * ((pow((1 + rate / 100), time)));
    interest = A - principal;
    cout << "Compound Interest = " << interest << endl;

    return 0;
}