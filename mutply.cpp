#include <iostream>
using namespace std;

void multiply(double a,double b){
	double product = a*b;
    cout<<product;
}

int main() {
	double a ;
    double b;
    
    cout <<"enter two number\n";
    
	cin>>a;
    cin>>b;
    multiply(a,b) ;
  return 0;
}
