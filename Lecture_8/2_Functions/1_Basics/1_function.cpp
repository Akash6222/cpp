# include <iostream>
using namespace std;

int power(int a, int b){

    int ans = 1;
    for( int i = 1; i<=b; i++){
        ans = ans * a;
    }

    return ans;
}

int main(){

    int a,b;
    cout<<"Enter the number and it's power "; // 2 3 = 8
    cin>> a >> b;
    
    int answer = power(a,b);
    cout<<"Answer is "<< answer << endl;

    return 0;
}