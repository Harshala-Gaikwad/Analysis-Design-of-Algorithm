#include<iostream>
using namespace std;
int Mul(int x,int y,int sum){
	if(y>0){
		sum=sum+x;
		Mul(x,--y,sum);
	}
	else return sum;
}
int main(){
	int x,y;
	cout<<"Enter x & y";
	cin>>x>>y;
	int M;
	M = Mul(x,y,0);
	cout<<M;
	
}
