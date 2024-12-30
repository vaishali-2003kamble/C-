#include<iostream>
using namespace std;
class Node
{
public:
    int num;
    Node *next;
};
class ListOperation
{
public:
    Node *head;
    ListOperation()
    {
        head=NULL;
    }
    Node *createnode(int);
    void addbegining(int);
    void addend(int);
    void addmid(int,int);
    void nodetravers();
    void deletebegin();
    void deleteend();
    void deletemid(int);
};


Node *ListOperation::createnode(int data)
{
    Node *newnode;
    newnode=new Node;
    if(newnode==NULL)
    {
        cout<<"\n No node created=";
        return NULL;
    }
    else
    {
        newnode->num=data;
        newnode->next=NULL;
    }
    return newnode;
}
void ListOperation::addbegining(int data)
{
    Node * newnode;
    newnode=createnode(data);
     if(head==NULL)
     {
         head=newnode;
         cout<<"successful";
     }
     else
     {
         newnode->next=head;
         head=newnode;
         cout<<"successful";
     }
}
void ListOperation::addend(int data)
{
    Node *newnode,*current;
    newnode=createnode(data);
    if(head==NULL)
    {
        head=newnode;
        cout<<"successful";
    }
    else
    {
        current=head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=newnode;
        cout<<"successful";
    }
}
void ListOperation::addmid(int data,int pos)
{
    Node *newnode,*current;
    newnode=createnode(data);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        current=head;
        for(int i=0;i<pos-1;i++)
        {
            if(current->next==NULL)
            {
                cout<<"insuffitient node";
            }
            else
            {
                current=current->next;
            }
        }
        newnode->next=current->next;
        current->next=newnode;
        cout<<"successful";
    }
}
void ListOperation::nodetravers()
{
    Node *newnode,*current;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        current=head;
        while(current!=NULL)
        {
            cout<<current->num<<endl;
            current=current->next;
        }
    }
}
void ListOperation::deletebegin()
{
    Node *current;
    if(head!=NULL)
    {
        current=head;
        head=current->next;
        cout<<current->num<<"successful";
    }
}
void ListOperation::deleteend()
{
    Node *newnode,*current,*prev;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        current=head;
        while(current->next!=NULL)
        {
            prev=current;
            current=current->next;
        }
        prev->next=NULL;
        cout<<current->num<<"successful";
        delete current;
    }
}
void ListOperation::deletemid(int pos)
{
    Node *newnode,*current,*prev;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        current=head;
        for(int i=0;i<pos-2;i++)
        {
            if(current->next==NULL)
            {
                cout<<"insuffitient node";
            }
            else
            {
                prev=current;
                current=current->next;
            }
        }
        prev->next=current->next;
        cout<<current->num<<"successful";
        delete current;
    }
}
