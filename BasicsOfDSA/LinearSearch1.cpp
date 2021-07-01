#include<iostream>
#include<vector>
using namespace std;

void search(vector<int> arr, int search_element)
{
    int left = 0;
    int length = arr.size();
    int position = -1; 
    int right = length - 1; 
    //Run the loop from 0 to right
    for(left=0;left<=right;)
    {
        //If search element is found with Left variable
        if (arr[left] == search_element)
        {
            position = left;
            cout << "Element found in Array at "
                 << position + 1 << " Position with "
                 << left + 1 << " Attempt";
               
            break;
        }
        if (arr[right] == search_element)
        {
            position = right; 
            cout << "Element found in Array at "
                 << position + 1 << " Position with "
                 << length - right << " Attempt";
            break;
        }
        left ++;
        right --;
    }
    //If element not found
    if(position == -1)
    {
        cout << "Not found in Array with "
             << left << " Attempt";
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int search_element = 3;
    search(arr, search_element);
}

