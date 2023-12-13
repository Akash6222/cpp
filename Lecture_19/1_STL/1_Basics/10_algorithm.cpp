#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<" v -> ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


    cout << "Finding 6 -> "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout << "Lower Bound -> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout << "Upper Bound -> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    
    int a = 3;
    int b = 5;

    cout<<" Max of a and b -> "<<max(a,b)<<endl;
    cout<<" Min of a and b -> "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"After swap a -> "<<a<<" and b -> "<<b<<endl;
    
    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"Reverse string of abcd -> "<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate v -> ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    

    // This sorting is based on INTRO SORT (Combination of Quick sort ,heap sort and intersion sort)
    sort(v.begin(),v.end());
    cout<<"After rotate v -> ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


}

