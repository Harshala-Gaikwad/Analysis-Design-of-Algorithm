#include<iostream>
#include<math.h>
#include<process.h>
using namespace std;
int n = 4;
int count=0;
int isattackcol(int c,int x[]){
	for(int i=0;i<n;i++){
		if(x[i]==c) return 1;
	}
	return 0;
}

int isattackdiag(int r,int c,int x[]){
	for(int i=0;i<n;i++){
		if(x[i]!=0){
			if(abs(i-r)== abs(x[i]-c))
			return 1;
		}
	}
	return 0;
}

int chk(int x[]){
	for(int i=1;i<=n;i++){
		if(x[i]!=0) return 0;
	}
	return 1;
}

void write(int x[]){
	for(int i=1;i<=n;i++)
		cout<<x[i]<<" ";
	//cout<<endl;	
}

void N_Queen(int r,int x[]){
	int c=1;
	while(c<=n){
		int chk1 = isattackcol(c,x);
		int chk2 = isattackdiag(r,c,x);
		if(chk1==0 && chk2 ==0){
			x[r]=c;
			if(r==n){
				cout<<"\nOutput \n";
				count++;
				write(x);
			}
			else
			N_Queen(r+1,x);
		} 
		c++;
	}
	x[r]=0;
	cout<<"\nIntermediate solution\n";
	write(x);
	if(chk(x)==1){
		cout<<"\nNo more output \n";
		cout<<"Total solutions : "<<count;
		exit(-1);
	}
}

int main(){
	int x[n+1]={0};
	N_Queen(1,x);
}
