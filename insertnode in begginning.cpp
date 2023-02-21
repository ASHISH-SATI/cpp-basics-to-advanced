#include<iostream>
using namespace std;
struct node
{
	int data;
	node * next;
	node(int x)
	{
		x=data;
		next=NULL;
	}
};
node *insertbeg(node*head,int x)
{
	node* temp=new node(x);
	temp->next=head;
	return temp;
}
int main()
{
	node*head=NULL;
	head=insertbeg(head,30);
	head=insertbeg(head,20);
	head=insertbeg(head,10);
	return 0;
}
