# include<iostream>
using namespace std;

int main() {

    int a = 3;
    cout<< a <<endl;

    if(true){
        int a = 5;
        cout<< a <<endl;    //will take a value in his if scope
    }

    cout<< a <<endl;

}