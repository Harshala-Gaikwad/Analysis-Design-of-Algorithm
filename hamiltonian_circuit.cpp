#include<bits/stdc++.h>
using namespace std;
#define V 4
      
int Create_loop(int r,int graph[V][V]){
	if(graph[r][0]==1)
		return 1;
	return 0;	
}
int issafe(int r,int c,int graph[V][V],int path[V]){
	if(graph[r][c]==1){
		for(int i=0;i<=V-1;i++){
			if(path[i]==c)
				return false;
		}
		return true;		
	}
	return false;
}

void Hamil_path(int r,int graph[V][V],int path[V]){
	if(pos==v){
		if(Create_loop(r,graph)==1){
			write(path);
			exit(-1);
		}
		else{
			cout<<"No connection of last & first node. ";
			path[--pos]=-1;
		}
	}
	else{
		c=0;
		while(c<=v-1){
			if(issafe(r,c,graph,path)){
				path[pos++]=c;
				Hamil_path(c,graph);
			}
			c++;
		}
		cout<<"No further path to reach destination. ";
		path[--pos]-1;
	}
}

int main(){
	int graph[V][V]= {{0,1,1,1},
					  {1,0,1,0},
					  {1,1,0,1},
					  {1,0,1,0}
					};
	int path[V];
	for(int i=0;i<V;i++){
		path[i]=-1;
	}			
	Hamil_path(0,graph,path);	
	return 0;
}
