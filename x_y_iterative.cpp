#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter x & y";
	cin>>x>>y;
	int sum=0;
	while(y!=0){
		sum=sum+x;
		y--;
	}
	cout<<sum;
}
