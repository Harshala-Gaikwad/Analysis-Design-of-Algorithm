#include<bits/stdc++.h>
using namespace std;

struct Item{
	double p,w,pw;
};
bool cmp(Item x,Item y){
 return x.pw>y.pw;	
}
void KnapSack(Item a[],int n,int m){
	int u = m;
	double t_profit = 0.0;
	double x[n]={0};
	int i;
	for(i=0;i<n;i++){
		if(a[i].w>u) break;
		x[i]=1;
		t_profit += x[i]*a[i].p;
		u -= a[i].w;
	}
	if(u!=0){
		x[i] = u/a[i].w;
		cout<<x[i];
		t_profit += x[i]*a[i].p;
	}
	cout<<t_profit<<endl;
}

int main(){
	int n=3;
    Item a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].p>>a[i].w;
		a[i].pw= a[i].p/a[i].w;
	}
	

sort(a,a+n,cmp);
KnapSack(a,n,20);
}



