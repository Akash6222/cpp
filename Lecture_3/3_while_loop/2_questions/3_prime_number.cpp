#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number : ";
    cin>> n;

    int i = 2;            // n+2 (we don't need to include 1 while calculating prime)
    
    while(i<n){           // calculate till n-1
        if(n%i==0){
            cout<<"Not a prime number "<<i<<endl;
        }
        else{
            cout<<"It is prime number "<<i<<endl;
        }
        i = i + 1;
    }
}

// This is not reliable program in future it will be enhanced