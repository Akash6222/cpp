# include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the value of n :";
    cin>>n;

    switch( n ){

        case 1:
              cout<< "First" <<endl;
              break;
        
        case 2:
              cout<< "Second" <<endl;
              break;
        
        default: 
               cout<< "It is default case" <<endl;
    }
}