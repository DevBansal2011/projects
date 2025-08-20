#include <iostream>
using namespace std;

int main() {
    int n=1221;
    int t=n;
    int rev=0;
    while(t>0)
    {
        int digit=t%10;
        rev=rev*10+digit;
        t=t/10;
    }
    if(n==rev)
        cout<<n<<" is palindrome";
    else
        cout<<n<<" is not palindrome";
}