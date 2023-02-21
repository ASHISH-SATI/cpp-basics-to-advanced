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
		prev=next=NULL;
	}
};
node *insertend(node *head,int x)
{
	node *temp=new node(x);
	if(head==NULL)
	return temp;
	node *curr=head;
	if(head!=NULL)
	{
	curr=curr->next;	
	}
	curr->next=temp;
	temp->prev=curr;
	return head;
}
int main()
{
	node*head=NULL;
	head=insertend(head,10);
	head=insertend(head,20);
	return 0;
}
