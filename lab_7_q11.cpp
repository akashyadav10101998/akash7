#include <iostream>
using namespace std;
int hcf(int n1 ,int n2);
int main()
{
int n1,n2;
cout<<"enter two number"<<n1<<n2<< endl;
cin>>n1>>n2;
cout<<"hcf of  numbers"<<n1<<"and"<<n2<<" is"<<hcf(n1,n2)<<endl;
return 0;
}
int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else 
       return n1;
}
