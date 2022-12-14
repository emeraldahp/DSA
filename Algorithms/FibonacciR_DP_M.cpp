#include<iostream>
#include<map>
#include<limits>
using namespace std;
/*
int fib(int n, map<int, int> memo={}) {
    //if(memo.find(n)!=memo.end()) return (memo.find(n)->second);
    if(memo.find(n)!=memo.end()) return memo[n];
    if(n<=2) return 1;
    memo[n]= fib(n-1, memo)+fib(n-2, memo);
    return memo[n];
}
*/

map<long long int, long long int> memo={};

int fib(long long int n){
    if(memo.find(n)!=memo.end()) return memo[n];
    if(n<=2) return 1;
    memo[n]= (long long int )fib(n-1)+(long long int)fib(n-2);
    cout<<"fib("<<n-2<<")"<<fib(n-2)<<" fib("<<n-1<<")"<<fib(n-1)<<endl;
    return memo[n];
}

void display(map<long long int, long long int> map1){
    map<long long int, long long int>::iterator itr;
    for(itr=map1.begin();itr!=map1.end();itr++) {
        cout<<"Key:"<<itr->first<<" Value:"<<itr->second<<endl;
    }
}

int main() {
    
    cout<<fib(50); //Key:46 Value:1836311903
    display(memo);
    
	long long int imin = std::numeric_limits<long long int>::min(); // minimum value
	long long int imax = std::numeric_limits<long long int>::max(); // maximum value

	std::cout << imin << " " << imax << std::endl;
    return 0;
}
