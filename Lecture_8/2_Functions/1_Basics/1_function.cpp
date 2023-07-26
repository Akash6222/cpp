# include <iostream>
using namespace std;

int power(int a, int x){    // a^x

    int ans = 1;
    for( int i = 1; i<=x; i++){
        ans = ans * a;
    }

    return ans;
}

int main(){
    
    // 1st power
    int a,b;
    cout<<"Enter the number and it's power "; // 2 3 = 8
    cin>> a >> b;
    
    int answer = power(a,b);
    cout<<"Answer is "<< answer << endl;

    // 2nd power
    int c,d;
    cout<<"Enter the number and it's power "; // 2 3 = 8
    cin>> c >> d;
    
    int answer1 = power(c,d);
    cout<<"Answer is "<< answer1 << endl;

    return 0;
}