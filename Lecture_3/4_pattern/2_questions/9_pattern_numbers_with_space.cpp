#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int row = 1;

    while(row<=n){

        int space = n-row;   // to get space before number
        
        while(space){
            cout<<" ";
            space = space -1;
        }


        int col = 1;

        while(col<=row){
            cout<<row;       // print row number
            col = col+1;
        }
        cout<<endl;
        row = row+1;
    }
}

//    1
//   22
//  333
// 4444