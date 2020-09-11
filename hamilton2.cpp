#include<bits/stdc++.h>
using namespace std;
#define V 5
//int graph[4][4]= {{0,0,1,1},{0,0,1,1},{1,1,0,0},{1,1,0,0}};
int graph[5][5] = {{0,1,1,1,0},{1,0,1,0,1},{1,1,0,1,1},{1,0,1,0,1},{0,1,1,1,0}};
int pos=1;
int path[5]={0};

bool createloop(int r){
	if(graph[r][0]==1){
		return true;
	}
	else{
		return false;
	}
}

bool issafe(int r,int c,int path[V]){
	if(graph[r][c]==1){
		for(int i=0;i<=V-1;i++){
			if(path[i]==c){
				return false;
			}
		}	return true;
	}
	return false;
}

void write(int path[]){
	for(int i=0;i<=V-1;i++){
		cout<<path[i]<<" ";
	}
}

void hamilpath(int r,int path[V]){
	if(pos==V){
		if(createloop(r)==true){
			write(path);
			//exit(-1);
			path[--pos]=-1;
		}
		else{
			cout<<"\nNo connection of last & first node\n ";
			path[--pos]=-1;
		}
	}
	else{
		int c=0;
		while(c<=V-1){
			if(issafe(r,c,path)){
				path[pos++]=c;
				hamilpath(c,path);
			}
			c++;
		}
		cout<<"\nNo furthur solution to reach destination\n"<<endl;
		path[--pos]=-1;
	}
}

int main(){
	hamilpath(0,path);
	return 0;
}
