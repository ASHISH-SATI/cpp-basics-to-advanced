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
node *deletehead(node *head)
{
	if(head==NULL)
	return NULL;
	if(head->next=NULL)
	{
		delete head;
		return NULL;
	}
	else
	{
		node *temp=head;
		head=head->next;
		head->prev=NULL;
		delete temp;
	}
	return head;
}
int main()
{
	node*head=NULL;
	head=deletehead(head);
	return 0;
}
