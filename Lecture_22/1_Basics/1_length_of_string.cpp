#include<iostream>
using namespace std;

int getLength(char name[]){

    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];
    
    cout << "Enter your name -> ";
    cin >> name;                // Note: Execution stop whenever we give tab /t, enter/nextline /n, space "_" 
    name[2] = '\0';              // Output will be print till name[0-1] ....coz \0 reprents null character
    
    cout << "Your name is -> "<<name <<endl;   // e,g Akash10 in array .......bascially 10 here means null character
    
    cout << "Length of name -> " << getLength(name) << endl;
    
    return 0;
}
