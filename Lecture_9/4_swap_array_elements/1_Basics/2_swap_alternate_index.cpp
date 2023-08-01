#include <iostream>
using namespace std;

// To swap alternate elements
void swapAlternate(int arr[], int n)
{
    for (int i = 0; i<n-1; i+=2) // Increment i by 2 to access alternate elements
    {
        swap(arr[i], arr[i + 1]);  // swap alternate 
    }
}

// To print array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[5] = {2, 6, 3, 9, 4};

    // Reverse func call
    swapAlternate(arr, 6);
    swapAlternate(brr, 5);

    // print func call
    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}
