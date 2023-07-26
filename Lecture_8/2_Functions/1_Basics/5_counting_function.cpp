# include <iostream>
using namespace std;


// When functions doesn't return anything then use void
void printCounting(int n){
    for( int i=1; i<=n; i++){
        cout<< i <<" ";
    }
    cout << endl;
}

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;
    
    printCounting(n);

    return 0;
}