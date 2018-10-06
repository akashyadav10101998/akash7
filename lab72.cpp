#include <iostream>
using namespace std;
void print(int i, int n)
{
if(i>n){
}
else {
cout<<i<<endl;
i++;
print(i,n);
}
 }
int main()
{
print (1,10);

}
