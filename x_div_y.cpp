#include<iostream>
using namespace std;

int main(){
	int x,y,count=0;
	cout<<"Enter the value of x and y: ";
	cin>>x>>y;
    while(x>=y){
    	x = x-y;
    	count++;
	}
	cout<<count;
	return 0;
}
