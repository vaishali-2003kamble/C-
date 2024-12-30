#include<iostream>
using namespace std;
class stack
{
	private:int top,size;
	int *arr;
	public:stack();
	stack(int );
	int push(int data);
	int pop();
	int peek();
};

stack::stack()
{
	top=-1;
	size=5;
	arr=new int[5];
}
stack::stack(int size1)
{
	top=-1;
	size=size1;
	arr=new int[size1];
}

stack::push(int data)
{
	if(top==size-1)
	{
		return 0;
	}
	else
	{
		top++;
		arr[top]=data;
	//	cout<<"data is insered sucful";
	}
}

stack::pop()
{	int popeed;
	if(top==-1)
	{
		return -1;
		
	}
	
	popeed=arr[top];
	top--;
	return popeed;
}
int stack::peek()
{
	if(top==-1)
	{
		return -1;
	}
	
		int trev;
		trev=arr[top];
	
	return trev;
}
int main()
{
	stack s;
	int ch,data,res;
	cout<<"1] push\n";
	cout<<"2]pop\n";
	cout<<"3]traverse\n";
	
	while(3)
	{	cout<<"\nenter your choice ";
	cin>>ch;
		switch(ch)
	{
		case 1:cout<<"enter your data ";
		cin>>data;
		res=s.push(data);
		if(res==0)
		{
				cout<<"stack is full\n";
		}
		else
		{
		
			cout<<"data is inserted sucfully "<<data<<endl;
		}
		break;
		case 2:res=s.pop();
		if(res==-1)
		{
			cout<<"stack is empty\n";
		}
		
		else
		{
			
			cout<<"data is removed sucfully "<<res<<endl;
		}
		break;	
		case 3:res=s.peek();
		if(res==-1)
		{
			cout<<"stack is empty\n";
		}
		
		else
		{
			
			cout<<"top data data  "<<res<<endl;
		}
		break;	
		
	}
	}
	
}
