#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
}*first;

void create(int A[],int n)
{
	node *temp,*last;
	first = new node;
	first->data=A[0];
	first->next=NULL;
	last = first;
	
	for(int i=1;i<n;i++)
	{
		temp= new node;
		temp->data=A[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
		
	}
}
void display(node *temp)
{
	
	while (temp != NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}

void recursivedisplay (node *temp)
{
	if(temp != NULL)
	{
		cout<<temp->data;
		recursivedisplay(temp->next);
	}
}

int count (node *temp)
{
	int l = 0;
	while(temp!=NULL)
	{
		l++;
		temp=temp->next;
	}
	return l;
}

int recurcount(node *temp)
{	
	if (temp==NULL)
	{
		return 0;
	}
	else 
	return recurcount(temp->next)+1;
}

int add(node *temp)
{
	int sum=0;
	while (temp!=NULL)
	{
		sum=sum+temp->data;
		temp = temp->next;
	}
	return sum;
}

int recuradd (node *temp)
{
	if (temp == NULL)
	{
		return 0;
	}
	else 
	{
	return recuradd(temp->next)+temp->data;
	}
}


int main()
{
	int A[]={1,2,3,4,5};
	create(A,5);
	
	display(first); cout<<endl;
	
	recursivedisplay(first); cout<<endl;
	
	int nodes = count (first);
	cout<<nodes<<endl;
	
	nodes = recurcount(first);
	cout<<nodes<<endl;
	
	int sum ;
	sum=recuradd(first);
	cout<<sum<<endl;
}
