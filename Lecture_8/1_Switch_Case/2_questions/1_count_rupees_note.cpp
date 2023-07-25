#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount in rupees: ";
    cin >> amount;

    cout << "Denominations:" << endl;

    // Calculate the number of notes for each denomination using a switch
    switch (amount / 2000) {
        case 1:
            cout << "Number of 2000 rupee notes: " << amount / 2000 << endl;
            amount %= 2000;
            break;
    }

    switch (amount / 500) {
        case 1:
            cout << "Number of 500 rupee notes: " << amount / 500 << endl;
            amount %= 500;
            break;
    }

    switch (amount / 100) {
        case 1:
            cout << "Number of 100 rupee notes: " << amount / 100 << endl;
            amount %= 100;
            break;
    }

    switch (amount / 50) {
        case 1:
            cout << "Number of 50 rupee notes: " << amount / 50 << endl;
            amount %= 50;
            break;
    }

    switch (amount / 20) {
        case 1:
            cout << "Number of 20 rupee notes: " << amount / 20 << endl;
            amount %= 20;
            break;
    }

    switch (amount / 10) {
        case 1:
            cout << "Number of 10 rupee notes: " << amount / 10 << endl;
            amount %= 10;
            break;
    }

    switch (amount / 5) {
        case 1:
            cout << "Number of 5 rupee notes: " << amount / 5 << endl;
            amount %= 5;
            break;
    }

    switch (amount / 2) {
        case 1:
            cout << "Number of 2 rupee notes: " << amount / 2 << endl;
            amount %= 2;
            break;
    }

    switch (amount / 1) {
        case 1:
            cout << "Number of 1 rupee notes: " << amount / 1 << endl;
            break;
    }

    return 0;
}
