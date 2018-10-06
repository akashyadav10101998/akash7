#include <iostream>
using namespace std;
int print (int i, int n){
	if(i<=n){
		if(i%2==0)
			cout<<i<<endl;
		i=i+2;
		print(i,n);
	}

}

int main(){
	print(0,10);
}
