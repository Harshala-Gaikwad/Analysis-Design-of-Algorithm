#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter the value of x and y: ";
	cin>>x>>y;
	int fac=1;
	for(int i=0;i<y;i++){
		fac = fac*x;
	}
	cout<<fac;
	return 0;
}
