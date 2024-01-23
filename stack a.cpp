#include<stdio.h>
#include<stdlib.h>
#include"st.h"
int main()
{
	int ch,num;
	init();
	{
		printf("\n 1-push \n 2-pop \n 3-disp");
		printf("enter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter number");
			       scanf("%d",&num);
			       push(num);
			       break;
			case 2:pop();
				   break;
			case 3:disp();
				    break;
			default:printf("invalid choice");
		}
	}while(ch<4);
}
