# include <iostream>
using namespace std; 

// To reverse array
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);      // swap number index i with n-i and vice-verse
        start++;
        end--;
    }
}

// To print array
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main ()
{
    int arr[6]= {1, 4, 0, 5, -2, 15};
    int brr[5]= {2, 6, 3, 9, 4};

    // Reverse func call
    reverse(arr, 6);
    reverse(brr, 5);
    
    // print func call
    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}
