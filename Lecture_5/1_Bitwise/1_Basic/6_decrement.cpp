# include<iostream>
using namespace std;

int main() {

    // post decrement
    // first use then decrease

    int i = 1;
    int a = 2;
    int sum = a + (i--);
    cout<<"Post decremented sum is "<<sum <<" and now i value is "<<i<<endl;

}

// int main(){

//     // pre decrement
//     // first decrease then use
//     int i = 1;
//     int a = 2;
//     int sum1 = a + (--i);
//     cout<<"Pre decremented sum1 is "<<sum1 <<" and now i value is "<<i<<endl;

// }