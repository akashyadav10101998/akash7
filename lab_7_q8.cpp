#include <iostream>
using namespace std;
int sumd(int n);
int main()
{
int n;
cout <<"enter a number"<<n<<endl;
cin>> n;
cout<<"sum of digits of number"<<n<< "is"<<sumd(n)<<endl;
return 0;
}
int sumd (int n)

{

    if (n != 0)

    {

        return (n % 10 + sumd (n / 10));

    }

    else

    {

       return 0;

    }

}
 
