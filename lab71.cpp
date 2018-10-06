# include <iostream>
using namespace std;
int power(int,int);
int main()
{
int a,b;
cout<<"enter a number"<<a<<endl;
cin>> a;
cout<<"enter the power"<<b<<endl;
cin>>b;
cout<<"result of power is"<<power(a,b)<<endl;
return 0;
}
int power(int a,int b)
{
if (b==0)
return 1;
else
return a*power(a,b-1);
}

