#include <iostream>
#include <map>
using namespace std;

int main(){

    map<int,string> m;
    
    // First way to insert 
    m[1] = "babbar";
    m[2] =  "lover";
    m[13] = "kumar";
    
    // 2nd way to insert 
    m.insert( {5,"bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 13 -> " <<m.count(13)<<endl;

    // erase
    cout<<"Before erase :- "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    m.erase(13);
    cout<<"After erase :-"<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    //iterator
    cout<<"Iterator :-"<<endl;
    auto it = m.find(5);

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
}
