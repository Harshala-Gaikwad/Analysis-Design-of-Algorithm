#include<bits/stdc++.h>
using namespace std;
#define V 5

int minKey(int key[],bool mstSet[]){
	int min=INT_MAX,min_index;
	for(int i=0;i<V;i++){
		if(mstSet[i]==false&& key[i]<min)
			min = key[i],min_index=i;
	}
	return min_index;
}
void printMst(int key[],int graph[V][V]){
	cout<<"Edge\t weight \n";
	for(int i=1;i<V;i++){
		cout<<key[0]<<"-"<<i<<"\t"<<key[i]<<"\n";
	}
}
void (int graph[V][V])
{
	int key[V];
	bool mstSet[V];
	for(int i=0;i<V;i++)
		key[i]= INT_MAX,mstSet[i]=false;
	key[0] = 0;
	for(int j=0;j<V-1;j++){
		int u = minKey(key,mstSet);
		mstSet[u]=true;
		for(int v=0;v<V;v++){
			if(graph[u][v]&&mstSet[v]==false && graph[u][v]+key[u]<key[v]){
				key[v]=graph[u][v]+key[u];
			}
		}	
		
	}
	printMst(key,graph);
}
int main(){
	int graph[V][V] = {{0,2,0,6,0},
						{2,0,3,8,5},
						{0,3,0,0,7},
						{6,8,0,0,9},
						{0,5,7,9,0}
						};					
	primMst(graph);
	return 0;
}
