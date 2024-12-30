#include<iostream>
using namespace std;
class queue
{
	private:int rear,front,size;
	int *arr;
	
	public:queue();
	queue(int s);
	int enqueue(int data);
	int dequeue();
	int peek();
	
};
queue::queue()
{
	rear=-1;
	front=-1;
	size=5;
	arr=new int[5];
}
queue::queue(int size1)
{
	rear=-1;
	front=-1;
	size=size1;
	arr=new int[size1];
}
queue::enqueue(int data)
{
	if(rear==size-1)
	{
		return 0;
	}
	rear++;
	arr[rear]=data;
	
}
queue::dequeue()
{
	if(front==-1 || front>rear)
	{
		return 1;
	}
	int dequedelem;
	dequedelem=arr[front++];
	if(front>rear)
	{
		front=rear=-1;
	}
	//front--;
	return dequedelem;
}
queue::peek()
{
	if(front==-1 || front>rear)
	{
		return 1;
	}
	int top;
	top=arr[front];
	return top;
}
int main()
{
	queue q;
	int ch,data,res;
	cout<<"1]enqueue\n";
	cout<<"2]dequeue\n";
	cout<<"3]peek\n";
	while(1)
	{
		cout<<"\nenter your choice ";
		cin>>ch;
		switch(ch)
	{
		case 1:cout<<"enter your data ";
		cin>>data;
		res=q.enqueue(data);
		if(res==0)
		{
			cout<<"queue is full\n";
			
		}
		else
		{
			cout<<"data is inserted sucfully "<<data<<endl;
		}
		break;
		case 2:
			res=q.dequeue();
			if(res==1)
			{
				cout<<"queue is empty\n";
				
			}
			else
			{
				cout<<"data is removed sucfully "<<res<<endl;
			}
		break;
		case 3:
			res=q.peek();
			
			if(res==-1)
				{
					cout<<"queue is empty\n";
				
				}
				
				else
						{
			
						cout<<"top data data  "<<res<<endl;
						}
						break;
	}
	
}

}




