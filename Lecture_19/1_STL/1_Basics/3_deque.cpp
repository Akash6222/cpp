#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.push_back(1);


    cout<<"Print First Index element -> " <<d.at(1) <<endl;

    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout <<"Before erase size is -> " <<d.size()<<endl;

    d.erase(d.begin()+1);

    cout <<"After erase size is -> " <<d.size()<<endl;
    
    cout<<"Elements are -> ";
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

}
