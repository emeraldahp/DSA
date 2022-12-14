#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCompare(int x, int y) {
    //return (x<y) for ascending order
    //return (x>y) for decending order
    return (x>y);
}


int main() {
    std::vector<int> v;
    vector<int> v1={23,32,57};
    //initailize
    int x;
    for(int i=0;i<5;i++) {
        std::cin>>x;
        v.push_back(x);
    }

    //traveral
    cout<<"values in vector v\n";
    for(int i=0; i<v.size(); i++) {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;
    
    //iterator_traversal
    cout<<"values in vector v using iterator\n";
    vector<int>::iterator itr;
    for(itr=v.begin();itr != v.end();itr++) {
        cout<<*itr<<" ";
    }
    cout<<endl;

    //algorithm
    cout<<"values in vector after sorting\n";
    sort(v.begin(), v.end(), myCompare);
    for(int i=0; i<v.size(); i++) {
        std::cout<<v[i]<<" ";
    }
    cout<<endl;

    //insert after the 3rd element two times
    v.insert(v.begin()+3, 2, 6); 
    for(itr=v.begin();itr != v.end();itr++) {
        cout<<*itr<<" ";
    }
    cout<<endl;

    //delete 5th to 6th element
    v.erase(v.begin()+4, v.begin()+6);
    for(itr=v.begin();itr != v.end();itr++) {
        cout<<*itr<<" ";
    }
    cout<<endl;

    //deletes the last elements
    v.pop_back();
    //deletes all elements
    v.clear();

    return 0;
}