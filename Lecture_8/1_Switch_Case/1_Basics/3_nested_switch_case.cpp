# include <iostream>
using namespace std;

int main() {
    
    char n = '1';
    int num = 1;

    switch( n ){

        case '1':
            switch(num){
                case 1:
                    cout<<"Value of num is "<<num<<endl;
                    break;
            }
            break;
        
        case '2':
            cout<< "Character 2" <<endl;
            break;
        
        default: 
               cout<< "It is default case" <<endl;
    }
}