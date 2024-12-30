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
	private:node*head;
	
	public:
		linkedlist()
		{
			head=NULL;
		}
		int addbegin(int data);
		int deleend();
		void traverse();
		
};
int linkedlist::addbegin(int data)
{
	node*newnode;
	if(newnode==NULL)
	{
		return -1;
	}
	newnode->data=data;
	newnode->next=head;
	head=newnode;
	return 0;
}
int linkedlist::deleend()
{
	if(head==NULL)
	{
		return -1;
		
	}
	node *p=head;
	node *q=NULL; 
	if(p->next!=NULL)
	{
		int data=p->data;
		delete p;
		head=NULL;
		cout<<"data is removed susscefuuly ";
		return data;
	}
	while(p->next!=NULL)
	{
		q=p;
		p=p->next;
	}
	int data=p->data;
	q->next=NULL;
		delete p;

	cout<<"data is removed susscefuuly ";
		return data;	
}

void linkedlist::traverse()
{
	if(head==NULL)
	{
		cout<<" list empty ";
	}
	else
	{
	node *p=head;
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->next;
	}
	cout<<endl;	
	}

}
int main()
{
	linkedlist l;
	int data,ch,res;
	cout<<"1]add begin\n";
	cout<<"2]delete end \n";
	cout<<"3]travserse\n";
	while(4)
	{
		cout<<"enter chioce ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"enter data ";
				cin>>data;
				l.addbegin(data);
				break;
			case 2:
		res=l.deleend();
		if(res==-1)
		{
			cout<<"empty ";
		}
		else
		{
			cout<<"data is removed suffy"<<res;
		}
			break;
			case 3:
			l.traverse();
			break;	
		}
	}
}






