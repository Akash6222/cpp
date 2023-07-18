// refer 4_pattern/1_baics/7_pattern_print_count_number_2
// Solve the problem

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int row = 1;

    while(row<=n){
        int col = row;         // col takes values of row

        while(col<2*row){       
            cout<<col;
            col = col+1;
        }
        cout<<endl;
        row = row+1;
    }
}

// 1
// 23
// 345
// 4567

// Note : Need nto understand more clearly