#include<iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 6;

    cout<<" a & b is " << (a&b) << endl;        // and operator
    cout<<" a | b is " << (a|b) << endl;        // or  operator
    cout<<" ~a is " << (~a) << endl;            // negation operator
    cout<<" a ^ b is " << (a^b) << endl;        // xor operator
}