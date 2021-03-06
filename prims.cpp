#include<bits/stdc++.h>
using namespace std;
#define V 7

int minKey(int key[],bool mstSet[]){
	int min=INT_MAX,min_index;
	for(int i=0;i<V;i++){
		if(mstSet[i]==false&& key[i]<min)
			min = key[i],min_index=i;
	}
	return min_index;
}
void printMst(int parent[],int graph[V][V]){
	cout<<"Edge\t weight \n";
	for(int i=1;i<V;i++){
		cout<<parent[i]<<"-"<<i<<"\t"<<graph[i][parent[i]]<<"\n";
	}
}
void primMst(int graph[V][V])
{
	int parent[V],key[V];
	bool mstSet[V];
	for(int i=0;i<V;i++)
		key[i]= INT_MAX,mstSet[i]=false;
	key[0] = 0;
	parent[0]=-1;
	for(int j=0;j<V-1;j++){
		int u = minKey(key,mstSet);
		mstSet[u]=true;
		for(int v=0;v<V;v++){
			if(graph[u][v]&&mstSet[v]==false && graph[u][v]<key[v]){
				parent[v]=u,key[v]=graph[u][v];
			}
		}	
		
	}
	printMst(parent,graph);
}
int main(){
	
	/*int graph[V][V]={{0,3,0,1},
				{3,0,4,2},
				{0,4,0,5},
				{1,2,5,0}
				};*/
	int graph[V][V] = {{0,28,0,0,0,10,0},
						{28,0,16,0,0,0,14
						},{0,16,0,12,0,0,0},
						{0,0,12,0,22,0,18},
						{0,0,0,22,0,25,24},
						{10,0,0,0,25,0,0},
						{0,14,0,18,24,0,0}
						};	
	primMst(graph);
	return 0;
}
