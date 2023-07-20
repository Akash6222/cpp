#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int row = 1;

    while(row<=n){

        int col = n;             // assigning col as n
        while(col>=row){        // reverse
            cout << "*";
            col = col - 1;
        }
        
        int space = n-row;
        while(space){
            cout<<" ";
            space = space -1;
        }

        cout<<endl;
        row = row + 1;
        
    }
}

// ***  
// ** 
// *



// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
    
//     int row = 1;

//     while(row<=n){
//         int star = n-row;

//         int col = 1;
//         while(col<=star){
//             cout << "*";
//             col = col + 1;
//         }
//         cout<<endl;
//         row = row + 1;
        
//     }
// }