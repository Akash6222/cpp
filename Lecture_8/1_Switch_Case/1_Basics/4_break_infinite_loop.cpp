# include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the value of n :";
    cin>>n;

    while(1){
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
        exit(0);        // exit will break the while loop 
    }
}