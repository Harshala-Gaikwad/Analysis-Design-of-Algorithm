#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size : ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int x;
	cout<<"Enter the element to be search : ";
	cin>>x;	
	int beg=0,last = n-1,mid;
	while(beg<=last){
		mid = (int)((beg+last)/2);
		if(a[mid]==x){
			cout<<"Element found at position "<<mid+1<<endl;
			return 0;
		}
		else if(a[mid]>x)
			last = mid-1;
		else
			beg = mid+1;	
	}	
	cout<<"Element not found ";
	return 0;
}
