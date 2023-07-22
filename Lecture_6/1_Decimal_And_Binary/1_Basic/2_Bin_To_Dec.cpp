# include<iostream>
# include<math.h>          // for pow
using namespace std;

int main() {

    int n;
    cout<<"Enter the Binary value : ";
    cin >> n;

    int i = 0, ans = 0;

    while( n != 0 ){
        
        // Digit
        int digit = n%10;         // we done modulus to get digit 

        if ( digit == 1){
            ans = ans + pow(2, i);
        }

        n = n/10;n                // doing right shift so that last digit will be removed and next digit will be used in while loop
        i++;
    }
    cout<< ans << endl;

}


// Note : We have stored the ans in int and int range is -2,147,483,648 to 2,147,483,647 if we bypass this range then same input will be printed