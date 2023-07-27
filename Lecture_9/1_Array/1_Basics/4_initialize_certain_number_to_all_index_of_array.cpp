#include <iostream>
using namespace std;

int main() {
    int number[10] = {1}; // Initializing the array with 1 for the first element

    // Set all other elements to 1
    for (int i = 1; i < 10; i++) {
        number[i] = 1;
    }

    // Printing all elements of the array
    for (int i = 0; i < 10; i++) {
        cout << number[i] << " ";
    }

    cout << endl; // Print a newline after printing the array elements

    return 0;
}
