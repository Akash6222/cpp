#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<(i-j+1);     // formula i-j+1
            j = j + 1;
        }
    cout<<endl;
    i = i + 1;
    }
}

// 1
// 21
// 321
// 4321