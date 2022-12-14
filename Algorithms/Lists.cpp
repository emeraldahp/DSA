#include<iostream>
#include<list>
using namespace std;

void display(list<int> list1) {
    list<int>::iterator itr;
    for(itr=list1.begin();itr!=list1.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

int main() {

    list<int> list1;
    list<int> list2 = {27,26,52};
    list1.push_back(34);
    list1.push_back(24);
    list1.push_front(89);
    list1.push_front(19);
    display(list1);

    list1.sort();
    display(list1);

    list1.reverse();
    display(list1);

    list1.pop_back();
    list1.pop_front();
    display(list1);

    display(list2);
    list1.merge(list2);
    display(list1);

    list1.remove(34);
    display(list1);
    return 0;
}