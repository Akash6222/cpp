#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int b = 1;

    if (++a){
        cout<<"The value of b is "<<b<<endl;
    }
    else{
        cout<<"The value of pre incremented b is "<< ++b;
    }
}