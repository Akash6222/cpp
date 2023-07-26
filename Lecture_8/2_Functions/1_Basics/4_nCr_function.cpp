# include <iostream>
using namespace std;

int factorial(int n){

    int fact = 1;
    for(int i =1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){

    int num = factorial(n);           // using factorial function
    int denom = factorial(r) * factorial(n-r);    // using factorial function
    return num/denom;

}

int main(){
    
    int  n, r;
    cout << "Enter value of n and r : ";   // 2 3
    cin >> n >> r;
    cout << "Answer is "<< nCr(n,r) << endl;

}