# include <iostream>
using namespace std;

int main() {

    //declaring array
    int number[4] = {2, 5, 11, 5};

    // size of array
    int sizeofarray = sizeof(number)/sizeof(int);
    cout << "Size of array is " << sizeofarray <<endl;
}


// number[4] means array contents 4 elements and each block in array is of 4 bytes ....there 4x4 is 8 bytes ......but we what actual size that's dividing with 4 ( size(int) is 4 bytes)