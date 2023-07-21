#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int row = 1;

    while( row<= n){

        // print space (1st triangle)
        int count = n - row +1;
        int col = 1;
        while(col <= count){
            cout<<col;
            col = col + 1;
        }

        // print 1st star
        int col1 = 1;
        while(col1<=row-1){
            cout << "*";
            col1 = col1 + 1;
        }

        // print 2nd star
        int col2 = 1;
        while(col2<=row-1){
            cout<<"*";
            col2 = col2+1;
        }

        // print 3rd triangle
        int col3 = 1;
        int count1 = n-row+1;
        while(col3 <= n-row+1){
            cout<<count1;
            col3 = col3 + 1;
            count1 = count1 - 1;
        }

        cout<<endl;
        row = row + 1;
    }

}

//    1
//   121
//  12321
// 1234321