#include <iostream>
using namespace std;

int main() {
/*
// One Input
    int n;  
    cout << "Enter the value of n: ";
    cin >> n; // cin is used to take input
    cout <<"Value of n is "<< n<< endl;
*/

/*
// Two inputs
   int a,b;
   cin>> a >> b;      // After giving 1st number enter then type 2nd number
                      // cin doesn't read " ", "\t", "\n"

   cout<<"Value of a and b is "<< a <<" "<< b <<endl;
*/

// cin.get
   int a;
   a = cin.get();           // through this we can take " ", "\t", "\n" and converted into numeric and then displayed
                            // a assic value are also applicable
   cout<<"Value of a is "<< a << endl;
}
