# include <iostream>
using namespace std;

int main() {

    //declaring array
    int number[11];

    //accesing array
    cout << "Value at 0 index is " << number[0] << endl;   // garbage value will be printed
    cout << "Value at 10 index is " << number[9] << endl;
    cout << "Value at 5 index is " << number[5] << endl;
}