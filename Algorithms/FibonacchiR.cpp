#include<iostream>
using namespace std;

//time: O(2^n)
//space: O(n)
int fib(int n) {
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return (fib(n-1)+fib(n-2));
}

int main() {
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<n<<"th number in the fibonacci series is: "<<fib(n);
    return 0;
}