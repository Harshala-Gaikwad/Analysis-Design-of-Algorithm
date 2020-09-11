#include<bits/stdc++.h>
using namespace std;
struct tnode{
	tnode *l;
	int length;
	tnode *r;
};
struct list1{
	tnode *root;
	list1 *next;
}*start = NULL ,*end = NULL,*m,*temp;

void Get_Node(){
    m = new(list1);
	m->root = new tnode;
	cout<<"Enter element : ";
	cin>>m->root->length;
	m->root->l = NULL;
	m->root->r = NULL;
	m->next = NULL;
}
void InsertAtBeg(){
	m->next = start;
	start = m;
}
void InsertAtLast(){
	end->next = m;
	end = m;
}
void InsertAtPos(){
	temp = start;
	while(temp->next->root->length < m->root->length){
		temp = temp->next;
	}
	m->next = temp->next;
	temp->next = m;
}
void Insert(){
	if(start== NULL){
		start = m;
		end = m;
	}
	else if(m->root->length<=start->root->length)
		InsertAtBeg();
	else if(m->root->length>=end->root->length)
		InsertAtLast();	
	else
		InsertAtPos();	
}
tnode* Least(tnode *temp){
	if(start==end){
		start = NULL;
		end = NULL;
	}
	else
		start = start->next;
	return temp;	
}
int main(){
	int n;
	cout<<"Enter no. of files : ";
	cin>>n;
	for(int i=0;i<n;i++){
		Get_Node();
		Insert();
	}int sum=0;
	for(int i=1;i<n;i++){
		list1 *newm = new list1;
		newm -> root = new tnode;
		newm->root->l= Least(start->root);
		newm->root->r= Least(start->root);
		newm->root->length = newm->root->l->length + newm->root->r->length;
		sum += newm->root->length;
		m = newm;
		Insert();
	}cout<<"sum = "<<sum;
}
