# include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int start = 0;
    int  end = n-1;
    int mid = start + (end-start)/2;

    while(start < end)
    {
        if(arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int binarySearch(int arr[], int start, int end, int key)
{
    int start = start;
    int end = end;
    int mid = start + (end-start)/2;

    while(start <= end)
    {
        if (arr[mid] == key)    //go to right part
        {
            start = mid +1;
        }
        else                   //key<arr[mid]
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){

    int arr[6] = {4, 8, 10, 17, 1, 3};
    cout << "Pivot element index is " << getPivot(arr, 6) <<endl;
}


int findPosition(int arr[], int n, int key)
{
    int pivot = getPivot(arr, n);

    if(k == arr[pivot] && k == arr[n-1])
    { //BS on second line
        return binarySearch(arr, pivot, n-1, k);
    }
    else
    { //BS on first line
        return binarySearch(arr, 0, pivot-1, k);
    }
}


// There are 2  more approach to find solution 



// Coding ninja question