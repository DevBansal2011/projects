#include <iostream>
using namespace std;
void reverseString(string &str, int start, int end){
    if(start >= end)
        return;
    swap(str[start], str[end]);
    reverseString(str, start+1, end-1);
}

int main(){
    // // Write a Program to Reverse a Sentence Using Recursion
    string str;
    cout<<"Enter a line: ";
    getline(cin, str);
    reverseString(str, 0, str.length()-1);
    cout<<"Reversed string: "<<str;

    return 0;
}