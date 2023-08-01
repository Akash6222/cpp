# include <iostream>
using namespace std; 

// function to print array
void sumArray(int arr[], int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of array is "<< sum << endl;
}

int main()
{
    // declare array
    int first[13] = {2, 7};
    //function call
    sumArray( first, 10);

    int second[3] = {1,2,3};
    sumArray( second, 3);
}