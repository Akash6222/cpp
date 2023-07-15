#include<iostream>
using namespace std ;

int main (){
    char ch = 'a';   
    cout << ch <<endl;    

    char ch1 = 'b'; 
    cout << ch1 <<endl;

// // Type Casting

    // char to int
    // a is mapped with 97 and b with 98 and so on and these numbers are converted into binary that's how char saves data
   
    int in = 'a';             // int doesn't saves char that's why when it replace that alphabet with it's int value
    cout << "a char is type casted into integer value of " << in <<endl;     

    int in1 = 'b';             // same as ch3 = 98
    cout << "b char is type casted into integer value of " << in1 <<endl;

    // int to char
    char ch2 = 97;
    cout << "97 int is type casted to char value of " << ch2 <<endl;

    char ch3 = 98;
    cout << "98 int is type casted to char value of " << ch3 <<endl;

    // Doubt
    char ch4 = 12345;  
    cout << ch4 <<endl;   

    char ch5 = 123456;
    cout << ch5 <<endl;
}