#include<stdio.h>
#include<conio.h>
struct node{
	int info;
	struct node* next;
};
	struct node *ptr,*tail=NULL,*start=NULL;
int main()
{
	int n;
	char opt,opt1;
	do
	{
  		ptr=(struct node *)malloc(sizeof(struct node));
		if(start==NULL)
		{
			tail=ptr;
			start=ptr;
		}
		else
		{
			tail->next=ptr;
			ptr->next=NULL;
			tail=ptr;
		} 
		printf("enter info\n");
		scanf("%d",&ptr->info);
		ptr->next=NULL;
		printf("Enter 'y' to continue\n");
		opt=getch();             
	}
	while(opt=='y');
	do
	{
			printf("Choose Option:\n");
	printf("1.Display info\n");
	printf("2.inserting data at Beginning\n");
	printf("3.inserting data at the End\n");
    printf("4.delete data at Beginning\n");
	scanf("%d",&n);
	switch(n)
	   {
	case 1:
	display(start);
	break;
	case 2:
    insertb(start);
    break;
    case 3:
    inserte(start);
    break;
    case 4:
    deleb();
    break;
    default:
    	printf("Wrong input");
    	break;
     	}
     	 printf("Enter 'x' to continue\n");
    opt1=getch();
	}
	while(opt1=='x');
}
void display(struct node * temp)
{
	printf("Data is:\n");
	if(temp==NULL)
	{
		printf("list is empty");
	}
	else
	while(temp!=NULL)
	{
		printf("%d\n",temp->info);
		temp=temp->next;
	}
}
void insertb(struct node *start)
{
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("Enter data to be inserted at beginning\n");
	scanf("%d",&ptr->info);
	ptr->next=start;
	start=ptr;
	display(start);
}
void inserte(struct node *start)
{
    struct node *ptr,*tail;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("Enter data to be inserted at the end\n");
	scanf("%d",&ptr->info);
	while(tail->next!=NULL)
	tail=tail->next;
	tail->next=ptr;
	ptr->next=NULL;
	display(start);
}
void deleb()
{
	struct node *temp;
	temp=start;
	start=start->next;
	free(temp);
	display(start);
}



