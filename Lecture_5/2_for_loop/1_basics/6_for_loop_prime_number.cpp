# include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the value of n : ";
    cin>>n;

    bool isPrime = 1;

    for(int i=2; i<n; i++){
        
        // Logic to detect prime or not
        if (n%i==0) {
            isPrime = 0;
            break;
        }
    }

    // using isPrime to give output
    if(isPrime == 0){
        cout<<n<<" is not a prime number"<<endl;
    }
    else{
        cout<<n<<" is a prime number"<<endl;
    }
}