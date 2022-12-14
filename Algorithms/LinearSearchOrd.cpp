#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool myComapare(int x, int y) {
    return x<y;
}

int LinearSearch(vector<int> items, int target)
{
    vector<int>::iterator itr;
    for(itr=items.begin();itr!=items.end(); itr++)
    {   cout<<"\npass: *itr="<<*itr<<" target="<<target;
        if( *itr == target) 
            return *itr;
        else if(*itr > target) 
            break;
    }
    return 0;
}


int main() {
    vector<int> items;
    int target=46;
    items.push_back(45);
    items.push_back(38);
    items.push_back(49);
    items.push_back(73);
    items.push_back(36);
    sort(items.begin(), items.end(), myComapare);
    
    vector<int>::iterator itr;
    for(itr=items.begin(); itr!=items.end();itr++)
        cout<< *itr <<" ";
    
    int index=LinearSearch(items, target);
    cout<<"\nfound:" << index;

    
}