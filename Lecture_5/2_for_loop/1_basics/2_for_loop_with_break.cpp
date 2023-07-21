#include<iostream>
using namespace std;

int main(){
    int n ;
    cout <<"Enter the value of n : ";
    cin >> n;

    int i = 1;
    cout << "Printing count from 1 to n " << endl;

    for(; ;){
        if(i<=n){
            cout<< i << endl;
        }
        else{
            break;          // will break the loop
        }
        i++;
    }
}