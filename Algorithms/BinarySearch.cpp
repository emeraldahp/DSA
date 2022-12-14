#include<iostream>
#include<algorithm>

//array is needed to be sorted

int BinarySearch(int arr[], int size, int target)
{
    //returns true if found
    int midpoint;
    int first=arr[0];
    int last=arr[size-1];
    while(first<=last)
    {
        midpoint=(first+last)/2;
        std::cout<<midpoint;
        if(midpoint==target)
            return true;
        else if(midpoint<target)
            first=midpoint+1;
        else
            last=midpoint-1;
    }
    return false;
}

int main()
{
    
    int arr[]={1,2,3,4,5,6,7};
    int target=6;
    int size=sizeof(arr)/sizeof(arr[0]);
    std::sort(arr, arr+size);
    bool found=BinarySearch(arr,size,target);
    if(found==true)
        std::cout<<"element found";
    else
        std::cout<<"element not found";
    return 0;
}