//Program to place stars in full pyramid pattern 
#include <iostream>
using namespace std;

int main()
{
    int gap, n;

    cout <<"Enter number of rows: ";
    cin >> n;

    for(int i = 1, k = 0; i <= n; ++i, k = 0)
    {
        for(gap = 1; gap <= n-i; ++gap)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}