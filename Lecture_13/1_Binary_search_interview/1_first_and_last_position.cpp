#include <iostream>
using namespace std;

//NOTE :- array is already sorted 

int firstOcc(int arr[], int size, int key)
{
    int start = 0, end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end)
    {
        if (arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(key > arr[mid]){        // come to right
            start = mid+1;
        }
        else if(key < arr[mid]){        // come to left
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0, end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end)
    {
        if (arr[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(key > arr[mid]){        // come to right
            start = mid+1;
        }
        else if(key < arr[mid]){        // come to left
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main ()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    cout << " First occurence of 3 is at Index " << firstOcc(even,6,3) <<endl;
    cout << " Last occurence of 3 is at Index " << lastOcc(even,6,3) <<endl;

    int odd[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    cout << " First occurence of 3 is at Index " << firstOcc(odd,11,3) <<endl;
    cout << " Last occurence of 3 is at Index " << lastOcc(odd,11,3) <<endl;

    return 0;
}

// coding ninja