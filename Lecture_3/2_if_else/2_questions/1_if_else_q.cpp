#include<iostream>
using namespace std;

int main(){
/* 
    int a = 9;
    if(a == 9){
        cout<<"Nine"<<endl;
    }
    if(a>0){
        cout<<"Positive"<<endl;
    }
    else{
        cout<<"Negative"<<endl;
    }
*/

    int a = 2;
    int b = a+1;

    if((a=3)==b){
        cout<<"a is "<<a<<endl;
        cout<<"b is "<<b<<endl;
    }
    else{
        cout<<"a+1 is "<<a+1<<endl;
        cout<<"b is "<<b<<endl;
    }
}