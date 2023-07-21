#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int row = 1;

    while(row<=n){
        int col = 1;
        int count = row;
        while(col<=n){
            cout << count << " ";
            count = count + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}

// 1 2 3 
// 2 3 4 
// 3 4 5 