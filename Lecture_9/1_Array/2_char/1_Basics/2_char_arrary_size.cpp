# include <iostream>
using namespace std;

int main()
{
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};

    for(int i = 0; i<5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl;

    int sizeChar = sizeof(ch)/sizeof(char);
    cout << "The size of ch is " << sizeChar << endl;
}