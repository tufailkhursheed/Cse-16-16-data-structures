#include<stdio.h>
int stack[5];
int top=-1;
int main()
{
	int choice;
	do{
			printf("1.For Push\n2.For Pop\n3.For Display\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			Push();
			break;
			
		case 2:
			Pop();
			break;
		case 3:
			display();
			break;
	}
  }while(1);
		
	}
Push()
{
	if(top==4)
	printf("Stack Overflow\n");
	else
	{
		top++;
		printf("Enter Element To be Inserted\n");
		scanf("%d",&stack[top]);
	}
}
Pop()
{
	if(top==-1)
	printf("Stack Underflow\n");
	else
	{
		printf("Element Deleted is %d\n",stack[top]);
		top--;
	}
}
display()
{
	int i;
	if(top==-1)
	printf("stack is Empty\n");
	else
	{
		for(i=top;i>-1;i--)
		printf("%d\n",stack[i]);
	}
}
