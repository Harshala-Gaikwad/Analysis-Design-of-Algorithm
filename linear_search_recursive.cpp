#include<iostream>
using namespace std;
int Linear(int a[],int n,int i,int x){
	if(a[i]==x)return i;
	if(i==n) return -1;
	Linear(a,n,++i,x);
}
int main(){
	int n;
	cout<<"Enter size:";
	cin>>n;
	int a[n],x,flag=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter element to be search";
	cin>>x;
	int L;
	L = Linear(a,n,0,x);
	if(L==-1)
	cout<<"not found";
	else
	cout<<"found at position"<<L+1;
	
}
