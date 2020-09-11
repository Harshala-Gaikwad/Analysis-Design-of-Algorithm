#include<iostream>
using namespace std;
int main(){
	int A[2][2],B[2][2];
	cout<<"Enter the elements of first matrix : "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
			cin>>A[i][j];
	}
	cout<<"\nEnter the elements of second matrix : "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
			cin>>B[i][j];
	}
	int p1,p2,p3,p4,p5,p6,p7,c[2][2];
	p1 = A[0][0]+(B[0][1]-B[1][1]);
	p2 = (A[0][0]+A[0][1])*B[1][1];
	p3 = (A[1][0]+A[1][1])*B[0][0];
	p4 = A[1][1]*(B[1][0]-B[0][0]);
	p5 = (A[0][0]+A[1][1])*(B[0][0]+B[1][1]);
	p6 = (A[0][1]-A[1][1])*(B[1][0]+B[1][1]);
	p7 = (A[0][0]-A[1][0])*(B[0][0]+B[0][1]);
	c[0][0]= p5+p4-p2+p6;
	c[0][1]= p1+p2;
	c[1][0]= p3+p4;
	c[1][1]= p5+p1-p3-p7;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
			cout<<c[i][j]<<" ";
		cout<<endl;	
	}	
}
