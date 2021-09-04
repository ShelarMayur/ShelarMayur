 //Fibonacci Series upto n numbers using loop
 #include<iostream>
 using namespace std;

int main()
{
    
    int limit, first=0, second=1, next, num;
    cout <<"Enter the limit of Fibonacci series: ";
    cin >> num;   
    cout << "First "<<num<<"terms of Fibonacci series are :- "<<endl;
    
    for(int n=0;n<num;n++)
    {
        if (n <= 1)
            next = n;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout<<next<<" ";
    }
    return 0;
}