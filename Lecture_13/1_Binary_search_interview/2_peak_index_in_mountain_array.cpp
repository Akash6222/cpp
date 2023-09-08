#include <iostream>
using namespace std;

int peak_Index(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main ()
{
    int arr[6] = {3, 4, 5, 1};
    cout << "The peak Index in mountain array is " << peak_Index(arr,6) <<endl;

    return 0;
}


// Leet code question