#include <iostream>
using namespace std;
int fact(int n);
int main()
{
int n;
cout<<"enter a number"<<n<<endl;
cin>>n;
cout<<"factorial of a number"<<n<<" is"<<fact(n)<<endl;
return 0;
}
int fact(int n)
{
if (n>1)
return  n*fact(n-1);
else
return 1;
}
