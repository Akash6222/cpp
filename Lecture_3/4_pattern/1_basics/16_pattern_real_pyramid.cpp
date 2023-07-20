#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int row = 1;

    while( row<= n){

        // print space (1st triangle)
        int space = n - row;
        while(space){
            cout<<" ";
            space = space - 1;
        }

        // print 2nd triangle
        int col = 1;
        while(col <= row){
            cout<<col;
            col = col + 1;
        }

        // print 3rd triangle
        int start = row - 1;
        while(start){
            cout<<start;
            start = start - 1;
        }

        cout<<endl;
        row = row + 1;
    }

}

//    1
//   121
//  12321
// 1234321