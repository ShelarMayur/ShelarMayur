#include <iostream>
using namespace std;
int main()
{

int n,d;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter number of rotations: ";
    cin>>d;
    int a[n];
    for(int i=0;i<n;cin>>a[i],i++);
    d=d%n;
    for(int i=d;i<n;i++)
        cout<<a[i]<<" ";
    
    for(int i=0;i<d;i++)
         cout<<a[i]<<" ";
    return 0;
}