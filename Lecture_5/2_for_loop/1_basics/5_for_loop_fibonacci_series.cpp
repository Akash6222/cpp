#include<iostream>
using namespace std;

int main(){
    int n ;
    cout <<"Enter the value of n : ";
    cin >> n;

    int a = 0;              // storing 1st number in a
    int b = 1;              // storing 2nd number in b
    cout << a << " " << b<< " ";

    for(int i = 1; i<=n; i++){

        int nextnumber = a+b;
        cout<< nextnumber<<" ";

        a = b;
        b = nextnumber;
    }
    cout <<endl;
}

// 0, 1, 1, 2, 3, 5, 8, 13, 21, .........