# include <iostream>
using namespace std; 

// function to print array
void printArray(int arr[], int size)
{
    cout<< "Printing the whole array : ";
    for(int i = 0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<endl;
    cout<< "Printing the Done: " <<endl;
}

int main()
{
    // declare array
    int first[13] = {2, 7};
    //function call
    printArray( first, 10);

    int second[3] = {1,2,3};
    printArray( second, 3);
}