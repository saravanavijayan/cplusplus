#include <iostream>
using namespace std;

int binarySearch(int arr[],int min,int max,int element)
{

    if(max>=1)
    {
        int mid=min+(max-1)/2;
        if(arr[mid]==element) return mid;
        if(arr[mid]>element) return binarySearch(arr,min,mid-1,element);
        return 
        binarySearch(arr,mid+1,max,element);
    }
    return -1;

}
 int main()
 {
  
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n-1, x);
    (result == -1)? printf("Element is not present in array")
    				: printf("Element is present at index %d", result);
    return 0;
 }
