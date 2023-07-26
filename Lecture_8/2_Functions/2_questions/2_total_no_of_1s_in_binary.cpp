#include <iostream>
#include <math.h>
using namespace std;

// To convert decimal number into binary
int dec_to_bin(int n){
    int i = 0;
    int ans = 0;
    while(n!=0){
        int bit = n&1;
        ans =ans +bit*pow(10,i) ;
        n = n>>1;
        i = i+1;
    }
    return ans ;
}

// To count no. of 1s in binary
int Count(int n){
    int num = dec_to_bin(n);
    int ans = 0;
    while(num!=0){
        int digit = num%10;
        if(digit==1){
            ans = ans + digit;
            
        }
        num=num/10;
    }
    return ans;
    
  
    return num;
}

int main(){
    int a,b;
    cout<<"Enter the Value of A and B"<<endl;  // 2 3
    cin>>a;
    cin>>b;
    

    int answer = Count(a) + Count(b);
    cout<<answer<<endl;
}


