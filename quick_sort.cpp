#include<bits/stdc++.h>
using namespace std;
int Partition(int a[],int f,int l){
	int pivot = a[l];
	int i = f-1;
	int j = f;
	while(j<=l-1){
		if(a[j]<pivot){
			i++;
			int temp = a[j];
			a[j]=a[i];
			a[i]= temp;
		}
		j++;
	}
	int temp1;
	temp1 = a[l];
	a[l]= a[i+1];
	a[i+1]=temp1;
	return i+1;
}
void Quick_Sort(int a[],int f,int l){
	if(f<l){
		int pos = Partition(a,f,l);
		Quick_Sort(a,f,pos-1);
		Quick_Sort(a,pos+1,l);
	}
}
int main(){
	int n;
	cout<<"Enter the size : ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	Quick_Sort(a,0,n-1);
	cout<<"Array After Sorting : "<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";	
}
