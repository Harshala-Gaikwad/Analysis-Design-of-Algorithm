#include<iostream>
using namespace std;
int Merge(int a[],int n,int f,int m,int l){
	int n1,n2,i,j,k;
	n1 = m-f+1;
	n2 = l-m;
	int Le[n1+1],R[n2+1];
	for(i=0;i<n1;i++)
		Le[i]= a[f+i];
	Le[i]= INT_MAX;
	for(j=0;j<n2;j++)
		R[j]= a[j+m+1];	
	R[j] = INT_MAX;
	i=0;j=0;
	for(k=f;k<=l;k++){
		if(Le[i]<=R[j]){
			a[k]=Le[i];
			i++;
		}
		else{
			a[k]= R[j];
			j++;
		}
	}	
}
void Merge_Sort(int a[],int n,int f,int l){
	if(f<l){
		int mid;
		mid = (int)((f+l)/2);
		Merge_Sort(a,n,f,mid);
		Merge_Sort(a,n,mid+1,l);
		Merge(a,n,f,mid,l);
}
}
int main(){
	int n;
	cout<<"Enter the size : ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	Merge_Sort(a,n,0,n-1);
	cout<<"Array after sorting :"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";	
}
