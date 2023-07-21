// Increment Operator

// i++ -> post-increment
// ++i -> pre-increment
// i+=1

// Decrement Operator

// i-- -> post-decrement
// --i -> pre-decrement
// i+=1

# include<iostream>
using namespace std;

int main() {
    
    int i = 7;

    cout<<"Pre increment is "<< (++i) << endl;
    cout<<"Post increment is "<< (i++) << endl;
    cout<<"Post decrement is "<< (i--) << endl;
    cout<<"Post decrement is "<< (--i) << endl;
}