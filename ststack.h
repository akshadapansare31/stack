#include<stdio.h>
#include"ststack.h"
void main()
{
	int ch,num;
	init();
	do
	{
		printf("\n 1-push \n 2-pop \n 3-disp");
		printf("enter choice");
		scanf("%d",&ch);
		switch(ch);
		{
			case 1:printf("enter number:");
			       scanf("%d",&num);
			       push(num);
			       break;
			case 2:pop();
	               break;
	        case 3:disp()
	                break;
	        default:printf("invalid choice");
		}
	}while(ch<4);
	
}
