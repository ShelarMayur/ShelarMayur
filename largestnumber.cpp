//Program to find largest number amongst 3 numbers given by the user
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of first number: ";
    cin>>a;
    cout<<"\nEnter the value of second number: ";
    cin>>b;
    cout<<"\nEnter the value of third number: ";
    cin>>c;

    if(a>b && a>c)
    {cout<<"First number is largest: "<<a<<endl;}
    else if(b>a && b>c)
    {cout<<"Second number is largest: "<<b<<endl;}
    else
    {cout<<"Third number is largest: "<<c<<endl;}
    
    return 0;
}