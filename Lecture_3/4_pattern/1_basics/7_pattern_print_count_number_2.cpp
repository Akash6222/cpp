#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int row = 1;

    while(row<=n){
        int col = 1;
        int value =  row;  // we read row 

        while(col<=row){
            cout<<value;       // we print value not row and append it value
            col = col+1;
            value = value+1;
        }
        cout<<endl;
        row = row+1;
    }

// 1
// 23
// 345
// 4567