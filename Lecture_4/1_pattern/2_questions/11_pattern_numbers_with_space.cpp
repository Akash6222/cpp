#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int row = 1;
    int count = 1;

    while(row<=n){

        int space = n-row;   // to get space before number
        
        while(space){
            cout<<" ";
            space = space -1;
        }

        int col = 1;

        while(col<=row){    // till col is less than equal to row
            cout<<count;      
            col = col+1;
            count = count + 1;
        }
        cout<<endl;
        row = row+1;
    }
}

//    1
//   23
//  456
// 78910