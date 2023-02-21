#include<iostream>
using namespace std;
struct node
{
	int data;
	node * prev;
	node * next;
	node(int d)
	{
		d=data;
		prev=NULL;
		next=NULL;
	}
};
node *insertbeg(node * head,int x)
{
	node * temp=new node(x);
	temp->next=head;
	if(head!=NULL)
	{
		head->prev=temp;
		
		
	}
	return temp;
}
int main()
{
	node*head=NULL;
	head=insertbeg(head,100);
	
	return 0;
}
