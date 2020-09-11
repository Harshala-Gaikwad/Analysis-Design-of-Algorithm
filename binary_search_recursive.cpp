#include<iostream>
using namespace std;
int Binary_Search(int a[],int n,int beg,int last,int x){
	int mid;
	if(beg<=last){
		mid = (int)(beg+last)/2;
		if(a[mid]==x)return mid;
		else if(a[mid]>x)Binary_Search(a,n,beg,mid-1,x);
		else Binary_Search(a,n,mid+1,last,x);
	}
	else return -1;
	
	
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
	int B;
	B = Binary_Search(a,n,0,n-1,x);
	if(B==-1)
		cout<<"Not found";
	else
		cout<<"Element found at position " <<B+1;
	}
	
