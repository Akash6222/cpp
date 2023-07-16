#include<iostream>
using namespace std ;

int main (){
/*
// One input if else
    int a;
    cout << "Enter the value of n: ";
    cin >> a;

    if(a>0){
        cout<<"A is Positive number "<<endl;
    }
    else{
        cout<<"A is negative"<< endl;
    }
*/

/*
// Two inputs if else
   int a,b;
   cout << "Enter the value of a ";
   cin >> a; 
   cout << "Enter the value of b ";
   cin >> b;
   
   if(a>b){
    cout<<"A is greater than A "<<endl;
   }
   if(a<b){
   cout<<"B is greater than A"<<endl;
   }
*/

   int a ;
   cout<<"Enter the value of A : ";
   cin>>a;

   if(a>0){
    cout<<"A is positive"<<endl;
   }

   else{
    if(a<0){
        cout<<"A is negative"<<endl;
    }
    else{
        cout<<"A is zero"<<endl;
    }
   }

}