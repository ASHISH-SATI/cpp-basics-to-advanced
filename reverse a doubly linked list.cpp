#include<iostream>
using namespace std;
struct node
{
	int data;
	node *prev;
	node*next;
	node(int d)
	{
		d=data;
		prev=next=NULL;
	}
};
node *revDLL(node * head)
{
	if(head==NULL||head->next==NULL)
	return head;
	node *prev=NULL;
	node*curr=head;
	while(curr!=NULL)
	{
		prev=curr->prev;
		curr->prev=curr->next;
		curr->next=prev;
		curr=curr->prev;
	}
	return prev->prev;
}
int main()
{
	node *head=NULL;
	head=revDLL(head);
	return 0;
}
