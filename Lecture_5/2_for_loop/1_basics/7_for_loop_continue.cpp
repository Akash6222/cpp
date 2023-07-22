# include<iostream>
using namespace std;

int main() {
    
    for(int i=0; i<5; i++){
        cout<<"Hi"<<endl;
        cout<<"Hey"<<endl;
        continue;

        // The part below continue will not be print
        cout<<"reply toh karde"<<endl;
    }
}