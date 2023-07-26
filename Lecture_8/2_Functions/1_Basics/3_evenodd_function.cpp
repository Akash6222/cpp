# include <iostream>
using namespace std;

// 1 -> Even
// 2 -> Odd
bool isEven(int a ){

    //odd
    if(a&1){
        return 0;
    }

    // Even
    return 1;      // Directly initiazing else ouput in return
}

int main(){
    
    int num;
    cout << "Enter the num : ";
    cin >> num;

    if(isEven(num)){
        cout<< "Number is Even" <<endl;
    }
    else{
        cout<< "Number is Odd" <<endl;
    }

    return 0;
}