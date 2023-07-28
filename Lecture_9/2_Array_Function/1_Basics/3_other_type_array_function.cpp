# include <iostream>
using namespace std; 

// function to print array
void printArray( arr[], int size)       // bool arr, double arr,etc should work
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
    double first[3] = {1.23, 7.21};
    //function call
    printArray( first, 3);

    float second[3] = {1.1, 2.2, 3.8};
    printArray( second, 3);

    bool third[3] = {0, 1, 0};
    printArray( third, 3);
}