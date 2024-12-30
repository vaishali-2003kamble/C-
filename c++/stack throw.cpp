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
		string m="stack is full";
		throw(m);
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
			string m="stack is empty";
		throw(m);
		
	}
	
	popeed=arr[top];
	top--;
	return popeed;
}
int stack::peek()
{
	if(top==-1)
	{
		string m="stack is empty";
		throw(m);
		
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
	{
	try
	{
		
		cout<<"\nenter your choice ";
	cin>>ch;
	
		switch(ch)
	{
		case 1:cout<<"enter your data ";
		cin>>data;
		s.push(data);
		cout<<"data is inserted sucfully "<<data<<endl;
		
		break;
		case 2:res=s.pop();
		cout<<"data is removed sucfully "<<res<<endl;
		break;	
		case 3:res=s.peek();
		cout<<"top data data  "<<res<<endl;
		break;	
		
	}	
	}
	catch(string m)
	{
		cout<<m<<endl;
	}
	
	}
	
}
