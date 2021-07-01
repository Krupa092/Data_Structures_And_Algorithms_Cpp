/* in binary search the data has to be sorted. if it is not, binary search will not work
Binary search recursivly divide the array */

/* Time Complexities
best case : O(1)
Worst case: O(log n)*/

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> arr, int search_element,int low, int high)
{
    while(low<=high)
    {
        int mid = low + (high-low)/2;

        if (arr[mid] == search_element)
        {
            return mid;
        }

        if (arr[mid]<search_element)
        {
            low = mid+1;
        }
        
        if (arr[mid]>search_element)
        {
            high = mid-1;
        }
        else
        {
            return -1;
        }
    }
}

int main(void)
{
    vector<int> arr{2,3,6,9,17,46,78,90};
    int search_element = 10;     
    int result = search(arr,search_element,0,arr.size());
    if(result == -1)
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Element is found at index "<<result;
    }
}
