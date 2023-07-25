# include <iostream>
using namespace std;

int main() {
    
    char n = '1';

    switch( n ){

        case '1':
            cout<< "Character 1" <<endl;
            break;
        
        case '2':
            cout<< "Character 2" <<endl;
            break;
        
        default: 
               cout<< "It is default case" <<endl;
    }
}