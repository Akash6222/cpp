#include <iostream>
#include <list>
using namespace std;


int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"After erase elemensts are -> ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of list "<<l.size()<<endl;
    
    list<int> m(5,100);
    cout<<"Printing n -> ";
    for(int i:m){
        cout<<i<<" ";
    }cout<<endl;

    // copy the list 
    list<int> n(m);
    cout<<"Printing m -> ";
    for(int i:m){
        cout<<i<<" ";
    }cout<<endl;


}
