#include<iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter char in alphabet or numeric : ";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout << "The character is lowercase." <<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout << "The character is uppercase."<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<< "The character is numeric."<<endl;
    }
    else{
        cout << "The input character is special character."<<endl;
    }
}

// This is just a simply and this is not a reliable program