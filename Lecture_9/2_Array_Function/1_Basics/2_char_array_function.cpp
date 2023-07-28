# include <iostream>
using namespace std;

// function to print array
void prinArray( char arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // declare array
    char ch[5] =  {'a', 'b', 'c', 'd', 'e'};
    //function call
    prinArray( ch, 5);
    
    char ay[3] = {'x', 'y', 'z'};
    prinArray( ay, 3);
}