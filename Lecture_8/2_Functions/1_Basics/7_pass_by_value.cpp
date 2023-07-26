# include <iostream>
using namespace std;

void dummy(int n )        // here we have reinitialized int n ....the n is copy of main function n ...both n are different
{
    n++;
    cout << "n is " << n <<endl;  // n = 16
}

int main()
{
    int n;
    cout << "Enter the vakue of n ";   // n = 15
    cin >> n;

    dummy(n);

    cout << "number n is "<< n << endl;  // n = 15

    return 0;
}


// n from dummy is different .... and when in int main dummy is called it takes value of n from main and not from dummy n
// That's why n in dummy func is 16 printed and n in main func is 15