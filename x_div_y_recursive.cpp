#include<iostream>
using namespace std;
int div(int x,int y,int count){
	if(x<y) 
	{
		
		cout<<"Q = "<<count;
		cout<<"remainder = "<<x;
		return 0;
	}count++;
	div(x-y,y,count);
}
int main(){
	int x,y;
	cout<<"Enter the value of x and y: ";
	cin>>x>>y;
	if(y==0){
	
	cout<<"Not possible";
	return 0;
}
 div(x,y,0);
	
	return 0;
}
