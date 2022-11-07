#include <iostream>
using namespace std;

struct stack
{
	int size;
	int top;
	int *s;
};

void push(stack *st, int x)
{
	if (st->top==st->size-1)
	cout<<"stack overflow";
	
	else {
		st->top++;
		st->s[st->top]=x;
	}
}

int pop(stack *st)
{
	int x=-1;  
	if (st->top==-1)
	cout<<"underflow";
	
	else{
		x=st->s[st->top];
		st->top--;
		}
		return x;
}

int peek(stack st, int pos) //CALL BY VALUE      //USE . IN CALL BY VALUE AND -> IN CALL BY REFERENCE
{
	int x=-1;
	if(st.top+1<0)
	cout<<"invalid index";
	
	else
	x=st.s[st.top];
	
	return x;
}

int isempty(stack st)
{
	if(st.top==-1)
	return -1;
	
	else 
	return st.s[st.top];
}
int isfull(stack st)
{
	if (st.top==st.size-1)
	return 1;
	
	else 
	return 0;
}

void display(stack st)
{
	for (int i=0;i<=st.top;i++)
	cout<<st.s[i];
	
}
int main()
{
	stack st;
	cout<<"enter the size";
	cin>>st.size;
	st.s = new int [st.size];
	st.top = -1;
	
	for (int i=1;i<=5;i++)
	push(&st,i);               //PASSING STACK ADDRESS
	
	display(st);
	
}
