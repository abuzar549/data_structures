#include<iostream>
using namespace std;

struct node
{
    int data;
    node *pre;
    node *next;
}*first,*last;



void make(int a[],int n)
{
    node *temp;
    first->data=a[0];
    first->pre=NULL;
    first->next=NULL;
    last=first;
    
    for(int i=1;i<n;i++)
    {
        temp=new node;
        temp->data=a[i];
        temp->pre=last;
        last->next=temp;
        last=temp;
    }
}


void display(node *p)
{
    while(p)
    {
        cout<<p->data;
        p=p->next;
    }
}



int main()
{
    int n;
    cout<<"enter the size";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    make(a,n);
    display(first);
}
