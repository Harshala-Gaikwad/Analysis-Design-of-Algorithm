#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter size:";
	cin>>n;
	int a[n],x,flag=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter element to be search";
	cin>>x;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			cout<<"Element found at position"<<i+1;
			return 0;
		}
	}

		cout<<"Element not found";		
}
