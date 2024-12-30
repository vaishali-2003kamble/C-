#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
class linkedlist
{
	public:
		node *head;
		linkedlist()
		{
			head=NULL;
		}
		node *createnode;
		void addbegin(int data);
		void deleteend();
		void traverse();
}
node *linkedlist::createnode(int data)
{
	node *newnode;
	newnode=new node;
	if(newnode==NULL)
	{
		return ;
	}
	else
	{
		newnode->data=data;
		newnode->next=NULL;
	}
	return newnode;
}


void linkedlist::addbegin(int data)
{
	node *newnode;
	newnode=createnode(data);
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode=newnode->next;
		head=newnode;
	}
}
void linkedlist::deleteend()
{
	node *curnode,*prev
	if(head==NULL)
	{
		return ;
	}
	else
	{
		curnode=head;
		while(curnode!=NULL)
		{
			prev=curnode;
			curnode=curnode->next;
		}
		perv->next=NULL;
		delete curnode;
		cout<<curnode->data<<endl;			
	}
}

void linkedlist::traverse()
{
	node *curnode,*newnode;
	if(head==NULL)
	{
		return;
	}
	else
	{
		curnode=head;
		while(curnode!=NULL)
		{
			cout<<curnode->data<<endl;
			curnode=curnode->next;
		}
	}
}
int main()
{
	linkedlist l;
	int data,ch;
	cout<<"1]add begin\n";
	cout<<"2]delete end\n";
	cout<<"3]traverse \n";
	while(1)
	{
		cout<<" enter choice :-";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\n enter data ";
			cin>>data;
			l.addbegin(data);
			break;
			
			case 2:
			l.deleteend();
			break;
			
			case 3:
				l.traverse();
				break;
				
		}
	}
}



