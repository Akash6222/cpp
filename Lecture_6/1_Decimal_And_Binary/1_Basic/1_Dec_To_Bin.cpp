# include<iostream>
# include<math.h>          // for pow
using namespace std;

int main() {

    int n;
    cout<<"Enter the decimal value : ";
    cin >> n;

    int ans = 0;
    int i = 0;

    while(n !=0 ){

        int bit = n & 1;          // to get last bit

        ans = (bit * pow(10,i) ) + ans;    // To get value in reverse

        n = n>>1;                          // doing right shift so that last bit be removed and next bit will be used in while loop
        i++;

    }
    cout<<"Answer is "<< ans <<endl;
}


// Note : We have stored the ans in int and int range is -2,147,483,648 to 2,147,483,647 if we bypass this range then same input will be printed