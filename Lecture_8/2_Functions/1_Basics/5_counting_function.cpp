# include <iostream>
using namespace std;

// Function signature (i.e it shows function returns what meaning whether it is int,bool,etc)
// When functions doesn't return anything then use void
void printCounting(int n){
    // function body
    for( int i=1; i<=n; i++){
        cout<< i <<" ";
    }
    cout << endl;
}

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;
    
    //function call
    printCounting(n);

    return 0;
}