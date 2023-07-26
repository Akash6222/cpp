# include <iostream>
using namespace std;

// 1 -> Prime no.
// 0 -> Not a Prime no.

bool isPrime(int n){

    for( int i = 2; i<n; i++){

        // Divide hogaya h, not a prime no.
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int n ;
    cout << "Enter the number : ";
    cin >> n;

    if(isPrime(n)){
        cout << n << " is a prime no." << endl;
    }
    else{
        cout << n << " is not a prime no." << endl;
    }
}