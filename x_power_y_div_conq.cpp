#include<iostream>
using namespace std;
int pow_div(int x,int y){
	if(y==1) return x;
	int t = pow_div(x,y/2);
	t= t*t;
	if(y%2==1)
	t = t*x;
	return t;
}
int main(){
	int x,y;
	cout<<"Enter the value of x and y: ";
	cin>>x>>y;
	int p = pow_div(x,y);
	cout<<p;
	return 0;
}
