#include<iostream>
using namespace std;

int fib(int n,int F[])
{
F[0]=0; 
F[1]=1;
for(int i=2;i<=n;i++)
{
F[i] =F[i-1] + F[i-2];
}
return F[n];
}

int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int F[n];
	cout<<"Fibonacci  : "<<fib(n,F);
}
