#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
struct stack
{
	char a[MAX];
	int top;
}s1;
void init()
{
	s1.top=-1;
}
int isempty()
{
	if(s1.top==-1)
	return 1;
	else
	return 0;
}
int isfull()
{
	if(s1.top==MAX-1)
	return 1;
	else
	return 0;
}
void push(struct stack s1,char x)
{
	if(isfull())
	printf("stack is full");
	else
	{
		s1.top++;
		s1.a[s1.top]=x;
	}
}
char pop()
{
	char ch;
	if(isempty())
	printf("stack is empty dont pop");
	else
	{
		ch=s1.a[s1.top];
		s1.top--;
		return ch;
		
	}
}

void disp()
{
	int i;
	for(i=s1.top;i>=0;i--)
	printf("%d\n",s1.a[i]);
}
int main()	
{
	int i,n,val;
	struct stack s1,s2,temp;
	init(s1);
	init(s2);
	init(temp);
	printf("enter limit of stack");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value");
		scanf("%d",&val);
		push(s1,val);
	}
	for(i=s1.top;i>=0;i--)
	{
		push(temp,s1.a[i]);
	}
	for(i=temp.top;i>=0;i--)
	{
		push(s2,temp.a[i]);
	}
	printf("display original stack");
	disp(s1);
	printf("\n display copy stack");
	disp(s2);
}
