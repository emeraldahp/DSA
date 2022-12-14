#include<iostream>
#include<algorithm>

bool BinarySearch(int arr[], int size, int target)
{
    if(size==0)
        return false;
    else
        if(arr[size/2]==target)
            return true;
        else if(arr[size/2]<target)
            return BinarySearch(&arr[(size/2)+1], size/2, target);
        else
            return BinarySearch(arr, (size/2)-1, target);
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