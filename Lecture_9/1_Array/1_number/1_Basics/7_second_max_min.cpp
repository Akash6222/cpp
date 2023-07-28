# include <iostream>
using namespace std ;

// Min Function
int getMin(int num[], int n)
{
    int mini = num[0];
    for(int i = 0; i<n; i++)
    {
        mini = min(mini, num[i]);     //using predefined min
    }
    //retruning max value
    return mini;
}

// Max Function
int getMax(int num[], int n)
{
    int maxi = num[0];
    for(int i = 0; i<n; i++)
    {
        maxi = max(maxi, num[i]);    //using predefined max
    }
    //retruning max value
    return maxi;
}

int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minmum value is " << getMin(num, size) << endl;

    return 0;
}