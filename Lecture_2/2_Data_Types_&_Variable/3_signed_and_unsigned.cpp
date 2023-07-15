#include<iostream>
using namespace std ;

int main (){
////signed 
  //range 0 to 2^(32)-1 and it contains +ve and -ve
    signed int a = 122;           
    cout << "Signed value of +ve a is " << a <<endl;

    signed int a1 = -122;
    cout << "Signed value of -ve a is " << a1 <<endl;

////unsigned 
  //range 0 to 2^(32)-1 and it only contains positive number
    unsigned int b = 122;   
    cout << "Unsigned value of +ve b is " << b <<endl;

    unsigned int b1 = -122;   
    cout << "Unsigned value of -ve b is " << b1 <<endl;  // 00000....01111010   converted into 11111....10000110  and then 10000110 converted into decimal
}