#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;

    while(i<=n){          // i is for rows
        int j = 1;
        while(j<=n){      // j is for columns
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}
// j++++++
// i+
//  +
//  +
//  +

// ***
// ***
// ***