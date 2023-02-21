#include<iostream>
using namespace std;
struct node
{
	int data;
	node*next;
	node(int x)
	{
		x=data;
		next=NULL;
	}
};
node *insertend(node * head,int x)
{
	node * temp=new node(x);
	if(head==NULL)
	{
		return temp;
	}
	node *curr=head;
	while(curr->next!=NULL)
	
		curr=curr->next;
		curr->next=temp;
		return head;
	
}
int main()
{
	node*head=NULL;
	head=insertend(head,10);
	head=insertend(head,20);
	head=insertend(head,40);
	return 0;
	
}
