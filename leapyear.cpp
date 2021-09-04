//Program to check whether the year entered by the user is leap year or not
#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"Check whether a year is a leap year or not";
    cout<<"\nEnter a year: ";
    cin>>y;

    if(y % 4 == 0)
    {cout<<y<<" is a leap year";}
    else
    {cout<<y<<" is not a leap year";}
    return 0;

}