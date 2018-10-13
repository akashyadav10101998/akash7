#include<iostream>
 
using namespace std;
 
int fibonacci(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
 
int main()
{
    int n,i=0;
    cout<<"Input the number  for Fibonacci Series:";
    cin>>n;
    cout<<"Fibonacci Series of the number is";
 
    while(i<n)
    {
        cout<<" "<<fibonacci(i);
        i++;
    }
 
    return 0;
}
