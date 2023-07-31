# include <iostream>
using namespace std ;

void update(int arr[], int n)
{
    cout << "Inside the function ";

    //updating array's first element
    arr[0] = 120;

    //printing the array
    for(int i=0; i<3; i++)
    {
        cout << arr[i] <<" ";
    }
    cout <<endl << "Going back to main function "<<endl;
}

int main()
{
    int arr[3] = {1,2,3};

    update(arr, 3);

    //printing the array
    cout<<"Printing in main function";
    for(int i=0; i<3; i++)
    {
        cout << arr[i] <<" ";
    }
    cout<<endl;
}


// In integer case ..... integer copy of main() func is given to update func
// In arr case .....  array address of main function is given to update function not data of array