#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int row = 1;
    char start = 'A';
    char value = start + n;

    while(row<=n){
        int col = 1;
        char currentChar = value - row;

        while(col<=row){
            cout<<currentChar;
            currentChar = currentChar + 1;   
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
        
    }
}

// D
// CD
// BCD
// ABCD