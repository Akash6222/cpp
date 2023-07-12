#include<iostream>
using namespace std ;

int main (){
    char ch = 'a';               // a is mapped with 97 and b with 98 and so on and these numbers are converted into binary that's how char saves data
    cout << ch <<endl;
    char ch1 = 'b'; 
    cout << ch1 <<endl;

    // Type Casting
    int ch2 = 'a';
    cout << "ch2 character is type casted to integer value of a = " << ch2 <<endl;

    int ch3 = 'b';
    cout << "ch3 character is type casted to integer value of b = " << ch3 <<endl;
}