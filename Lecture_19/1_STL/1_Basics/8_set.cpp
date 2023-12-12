#include <iostream>
#include <set>
using namespace std;

int main(){
    
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    // Printing set s 
    cout<<"Printing the s set -> ";
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"After iterator -> ";
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"5 is preset or not -> "<<s.count(5) <<endl;

    set<int>::iterator itr = s.find(5);

    cout<<"value present at itr -> "<<*it<<endl;
    
    // After itr values
    for(auto it=itr; it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}
