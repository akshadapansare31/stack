#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
NODE *top;
void init()
{
	top=NULL;
}
int isempty()
{
	if(top=NULL)
	return 1;
	else
	return 0;
}
void push(int num)
{
	NODE *newnode;
	newnode=(node *)malloc(sizeof(node));
	newnode->data=num;
	newnode->next=top;
	top=newnode;
	printf("\n push succ...");
}
int pop()
{
	int val;
	NODE *temp;
	if (isempty)
	{
		printf("stack is underflow..");
		return 0;
	}
	else
	{
		temp=top;
		val=temp->data;
		top=top->next;
		free(temp);
		return val;
	}
}
int peek()
{
	return(top->data);
}
void disp()
{
	NODE *temp;
	for(temp=top;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}
int main()
{
	int ch,num;
	init();
	do
	{
		printf("\n1-push \n 2-pop \n 3-peek \n 4-disp");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter number");
				   scanf("%d",&num);
				   push(num);
				   break;
			case 2:printf("poped value=%d",pop());
				   break;
			case 3:printf("\n lastelement=%d",peek());
				   break;
			case 4:disp();break;
		}
	}while(ch<5);
}
