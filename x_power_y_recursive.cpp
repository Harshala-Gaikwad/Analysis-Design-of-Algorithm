#include<iostream>
using namespace std;
int pow(int x,int y,int sum){
	if(y!=0){
		pow(x,y-1,sum*x);
	}
	else return sum;
}
int main(){
	int x,y,p;
	cout<<"Enter the value of x and y: ";
	cin>>x>>y;
	p= pow(x,y,1);
	cout<<p;
	return 0;
}
