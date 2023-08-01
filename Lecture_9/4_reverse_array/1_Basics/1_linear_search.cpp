# include <iostream>
using namespace std; 

bool serach(int arr[], int size, int key)
{
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {-1, 3, 1 , 5, 9, -11, 6, 25, 22, 14};

    //whether 1 is present in it or not ?
    cout << "Enter the element to search for ";
    int key;
    cin >> key;

    bool found = serach(arr, 10, key);

    if( found ){
        cout << "Key is present "<< endl;
    }
    else{
        cout << "Key is not present " << endl;
    }

}