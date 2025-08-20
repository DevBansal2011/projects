#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    char c;
    double d;

    cout<<"size of a,b,c,d = "<<endl;
    cout<<"a is an integer of size "<<sizeof(a)<<" bytes"<<endl;
    cout<<"b is a float of size "<<sizeof(b)<<" bytes"<<endl;
    cout<<"c is a char of size "<<sizeof(c)<<" bytes"<<endl;
    cout<<"d is a double of size "<<sizeof(d)<<" bytes"<<endl;
}