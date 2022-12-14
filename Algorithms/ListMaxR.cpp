#include<iostream>
#include<list>
using namespace std;

int max_list(list<int> l, int maxList=-1) {
    if(l.empty())
    {
        return maxList;
    }
    else{
        if(maxList<l.front()) 
            maxList=l.front();
        l.remove(l.front());
        return max_list(l, maxList);
    }

}

int main() {
    list<int> l1={32,67,42,23};
    cout<<max_list(l1);
    return 0;
}