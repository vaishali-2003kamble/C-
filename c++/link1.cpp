#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
		node()
		{
			data=0;
			next=NULL;
		}
};
class linkedlist
{
	node*head;
	public:
		linkedlist()
		{
			head=NULL;
		}
		int addbegin(int );
		int deleteend();
		void traverseal();
};
int linkedlist::addbegin(int data)
{
	node *newnode;
	newnode=new node;
	if(newnode==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode=newnode->next;
		head=newnode;
	}
	cout<<"data is insetted suffecfd :- "<<data<<"\n";
	return 0;
}
int linkedlist::deleteend()
{
	
	
	
	
    
	node *p,*q;
	if(head==NULL)
	{
			return -1;
	}
	
	else
	{
		p=head;
		while(p->next!=NULL)
		{
			q=p;
			p=p->next;
		}
		int data=p->data;
		q->next=NULL;
		delete p;
		
		//cout<<"deleleted element is :- "<<data<<"\n";
		return data;
	}
}
void linkedlist::traverseal()
{
		
	if(head==NULL)
	{
		cout<<"list is empty\n";
	}
	else
	{
	
		node *p=head;
		while(p!=NULL)
		{
			cout<<p->data;
			p=p->next;
		}
		cout<<endl<<endl;
	}
}

int main()
{
	linkedlist l;
	int data,res,ch;
	cout<<"1]add begin\n ";
	cout<<"2]delete end \n";
	cout<<"3]traverse \n";
	while(1)
	{
		cout<<"enter choice ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"enter data ";
				cin>>data;
				l.addbegin(data);
				break;
			case 2:
		res=l.deleteend();
		if(res==-1)
		{
			cout<<"list is empty\n";
		}
		else
		{
			cout<<"delted data is "<<res;
		}
			break;
			case 3:
			l.traverseal();
			break;	
		}
	}
}




