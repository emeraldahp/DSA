#include<iostream>

int LinearSearch(int a[], int target, int size)
{
    //returns the index of the search element if found
    for (int i=0; i<size; i++)
    {
        std::cout<<"element="<<a[i]<<"target="<<target<<"\n";
        if(a[i]==target)
        return i;
    }
    return -1;
}

int main()
{
    int a[]={1,2,3,4,5,6,7};
    int ele=4;
    int size=sizeof(a)/sizeof(a[0]);
    int index=LinearSearch(a,ele,size);
    std::cout<<index;
    if(index==-1)
        std::cout<<"the element was not found";
    else
        std::cout<<"the element was found at index"<<index;
    return 0;
}