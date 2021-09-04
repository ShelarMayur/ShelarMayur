//Program to swap two numbers
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,temp;

    cout<<"Enter the value for first number: ";
    cin>>num1;
    cout<<"\nEnter the value for second number: ";
    cin>>num2;
    cout<<"\nNumbers before swaping";
    cout<<"\n  "<<"a = "<<num1<<" and b = "<<num2;

    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"\nNumbers after swaping";
    cout<<"\n "<<"a = "<<num1<<" and b = "<<num2;
    return 0;
}