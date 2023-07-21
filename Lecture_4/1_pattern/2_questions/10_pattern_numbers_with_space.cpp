#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int row = 1;

    while(row<=n){

        int space = row-1;
        while(space){
            cout<<" ";
            space = space -1;
        }

        int col = 1;
        int star = n-row+1;
        int count = row;         // keeping count of row

        while(col<=star){
            cout << count;  
            col = col + 1;
            count = count + 1;
        }
        cout<<endl;
        row = row + 1;
        
    }
}

// 1234
//  234
//   34
//    4