#include<iostream>
using namespace std ;

int main (){
    int a = 5;             // 4 byte -> 32 bit
    cout << a <<endl;

    char ch = 'a';         // 1 byte -> 8 bit
    cout << ch <<endl;

    bool bol = true;          // 1 bit
    cout << bol <<endl;

    float f = 1.2;         // 8 byte -> 64 bit
    cout << f <<endl;

    double d = 1.23;       // 8 byte -> 64 bit
    cout << d <<endl;

    // sizeof will give size of variable
    int size = sizeof(a);
    cout << "Size of a is : " << size << endl;
}