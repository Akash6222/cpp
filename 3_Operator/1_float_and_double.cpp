#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double Double_value = 5.12345678987;

    float float_value = 5.12345678987;
    
    cout << setprecision(12);
    cout <<"Double gives actual value"<< Double_value << endl; // 5.12345678987
    cout <<"Float doesn't gicve actual value after 6th decimal"<< float_value << endl; // 5.12345695496
}