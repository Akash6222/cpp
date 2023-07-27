# include <iostream>
using namespace std;

int main() {

    int number[10] = {1};    // Initialize the 1st element to 1 ...not all index initialize to 1
    // Printing all elements of the array
    for (int i = 0; i < 10; i++) {
        cout << number[i] << " ";
    }

    cout << endl; // Print a newline after printing the array elements

    return 0;

}