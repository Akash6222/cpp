#include <iostream>
using namespace std;

int fibonac(int n)
{
    int a = 0;    // storing the 1st number in 'a'
    int b = 1;    // storing the 2nd number in 'b'

    cout << a << " " << b << " ";

    for (int i = 2; i <= n; i++)
    {
        int nextnumber = a + b;
        cout << nextnumber << " ";

        a = b;
        b = nextnumber;
    }

    return b; // Return the nth Fibonacci number (the last value of 'b')
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = fibonac(n);
}
