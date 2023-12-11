#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;
    cout << "Capacity -> " <<v.capacity()<<endl;

    v.push_back(1);
    cout << "Capacity -> " << v.capacity()<<endl;
    v.push_back(2);
    cout << "Capacity -> " << v.capacity()<<endl;
    v.push_back(3);
    cout << "Capacity -> " << v.capacity()<<endl;

    cout << "Size -> " << v.size()<<endl;

    cout << "Elements at 2nd Index " <<v.at(2) <<endl;

    cout << "Front " << v.front() <<endl;
    cout << "Back " << v.back() <<endl;

    cout << "Before pop " <<endl;
    for(int i:v){
        cout << i <<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"After pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<< "Before clearing size, Size is " <<v.size()<<endl;
    cout<< "Before clearing size, Capacity is " <<v.capacity()<<endl;
    v.clear();
    cout<< "After clearing size Size is " <<v.size()<<endl;
    cout<< "Before clearing size, Capacity is " <<v.capacity()<<endl;

    // initialize the size 
    vector<int> a(5,1);               // 5 is the size and 1 means intialize it with 1 (warna sare elements 0 se intialize ho jayege vector mein )
    
    // copy a vector in new vector 
    vector<int> b(a);
    cout<< "Print b"<<endl;
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;

}


// Vector is an dynamic data types which means it increases it's size eventually
// When new data comes in it doubles it's size
