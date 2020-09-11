#include<bits/stdc++.h>
using namespace std;
struct tnode{
	tnode *l;
	char data;
	int length;
	tnode *r;
}*temp1;
struct list1{
	tnode *root;
	list1 *next;
}*start = NULL ,*end = NULL,*m,*temp;

void Get_Node(){
    m = new(list1);
	m->root = new tnode;
	cout<<"Enter data : ";
	cin>>m->root->data;
	cout<<"Enter frequency : ";
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

void printData(tnode *temp1,string str){
		if(temp1->l){
			printData(temp1->l,str+'0');
		}	
		if(temp1->r){
			printData(temp1->r,str+'1');
		}
	if(temp1->l==NULL && temp1->r==NULL){
		cout<<temp1->data<<" = "<<str<<endl;
	}
}

int main(){
	int n;
	cout<<"Enter no. of files : ";
	cin>>n;
	for(int i=0;i<n;i++){
		Get_Node();
		Insert();
	}
	for(int i=1;i<n;i++){
		list1 *newm = new list1;
		newm -> root = new tnode;
		newm->root->l= Least(start->root);
		newm->root->r= Least(start->root);
		newm->root->data = '$';
		newm->root->length = newm->root->l->length + newm->root->r->length;
		m = newm;
		Insert();
		
	}
	string str = " ";
	printData(start->root,str);
}
