#include<bits/stdc++.h>
using namespace std;
struct Job{
	int id,p ,d;
};
bool cmp(Job x,Job y){
	return x.p>y.p;
}
void Job_seq(Job a[],int n){
	int slot[n],result[n];
	for(int i=0;i<n;i++)
		slot[i]=-1;
	for(int i=0;i<n;i++){
		for(int j= (a[i].d)-1;j>=0;j--){
			if(slot[j]==-1){
				slot[j]=1;
				result[j] = a[i].id;
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(slot[i]!=-1)
			cout<<result[i]<<" ";
	}	
}
int main(){
	int n;
	cout<<"Enter no. of id : ";
	cin>>n;
	Job a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].id>>a[i].p>>a[i].d;
	}
	sort(a,a+n,cmp);
	Job_seq(a,n);
}
