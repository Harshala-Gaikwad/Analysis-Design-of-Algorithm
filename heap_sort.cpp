#include<iostream>
using namespace std;
void heapify(int a[],int n,int i){
	int largest = i;
	int l=2*i+1;
	int r = 2*i+2;
	if(l<n&&a[l]>a[largest])
	largest = l;
	if(r<n&&a[r]>a[largest])
	largest = r;
	if(largest!=i){
		int temp;
		temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		heapify(a,n,largest);
	}
}
void HeapSort(int a[],int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(a,n,i);
	}
	for(int i=n-1;i>=0;i--){
		int temp1;
		temp1=a[0];
		a[0]=a[i];
		a[i]=temp1;
		heapify(a,i,0);
	}
}

int main(){
	int n;
	cout<<"\nEnter size of array\n";
	cin>>n;
	int a[n];
	cout<<"\nEnter the elements\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	HeapSort(a,n);
	cout<<"ARRAY AFTER SORTING\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
