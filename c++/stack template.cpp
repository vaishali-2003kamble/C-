#include<iostream>
using namespace std;
template <class t>
class stack
{
	private:int top,size;
	t *arr;
	public:stack();
	stack(int );
	int push(t data);
	int pop();
	int peek();
};
template <class t>
stack<t>::stack()
{
	top=-1;
	size=5;
	arr=new int[5];
}
template <class t>
stack<t>::stack(int size1)
{
	top=-1;
	size=size1;
	arr=new int[size1];
}
template <class t>
stack<t>::push(t data)
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
template <class t>
stack<t>::pop()
{	int popeed;
	if(top==-1)
	{
		return -1;
		
	}
	
	popeed=arr[top];
	top--;
	return popeed;
}
template <class t>
 stack<t>::peek()
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
	stack <int>s;
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
