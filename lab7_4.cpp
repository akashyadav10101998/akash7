#include <iostream>
using namespace std;
int sum(int i)
{
 if (i==1){ return 1;
  }
 else { 
    return i+sum(i-1);
  }
}
int main()
{
cout<<"sum is "<<sum(10)<<endl;
return 0;
}

