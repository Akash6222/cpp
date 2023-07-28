# include <iostream>
using namespace std;

int main() {

    // Initializing the array with 0
    int number[10] = {0};

    cout<< "Printing the whole array : ";

    // Printing all elements of the array
    for (int i = 0; i < 10; i++) {
        cout << number[i] << " ";
    }

    cout << endl; // Print a newline after printing the array elements

    return 0;

}