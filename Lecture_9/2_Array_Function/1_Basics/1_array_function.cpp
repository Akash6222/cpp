# include <iostream>
using namespace std; 

// Hold
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
    int first[13] = {2, 7};
    printArray( first, 10);

    int second[3] = {1,2,3};
    printArray( second, 3);
}