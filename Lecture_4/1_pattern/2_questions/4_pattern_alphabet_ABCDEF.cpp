#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int row = 1;
    char start = 'A';

    while(row<=n){
       int col = 1;
       
       while(col<=n){
           cout<<start<<" ";

           col = col + 1;
           start = start + 1;
       }
       cout<<endl;
       row = row + 1;
    }

}

// ABC
// DEF
// GFI