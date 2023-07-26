# include <iostream>
using namespace std;

int power(){

    int a, b;
    cout<<"Enter the number and it's power "; // 2 3 = 8
    cin>> a >> b;

    int ans = 1;
    for( int i = 1; i<=b; i++){
        ans = ans * a;
    }

    return ans;
}

int main(){
    
    int ans = power();
    cout<<"Answer is "<< ans << endl;

    return 0;
}