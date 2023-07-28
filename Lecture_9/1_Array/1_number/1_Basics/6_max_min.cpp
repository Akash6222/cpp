# include <iostream>
#include <climits> // Include the <climits> header to use INT_MAX and INT_MIN
using namespace std ;

// Min Function
int getMin(int num[], int n)
{
    int min = INT_MAX;           // using INT_MAX
    for(int i = 0; i<n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    //retruning max value
    return min;
}

// Max Function
int getMax(int num[], int n)
{
    int max = INT_MIN;            // using INT_MIN
    for(int i = 0; i<n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    //retruning max value
    return max;
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