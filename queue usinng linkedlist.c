#include<stdio.h>
struct que{
	int data;
	struct que* next;
};
struct que *f=NULL,*r=NULL,*ptr;
void enqueue()
{
	char opt;
	do
	{
			ptr=(struct que*)malloc(sizeof(struct que));
	printf("ENTER DATA:\n");
	scanf("%d",&ptr->data);
	if(f==NULL)
     	{
		r==ptr;
		f==ptr;
	    }
	else
     	{
		r->next=ptr;
		r=r->next;
	    }
	printf("Press 'y' to Continue\n");
	opt=getch();
	}while(opt=='y');
}
void display()
{
	struct que *temp=f;
	if(f!=NULL)
	while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	else
	printf("Queue is empty\n");
}
void dequeue()
{
    struct que *temp;
    if(f!=NULL)
    {
      temp=f;
	  f=f->next;
	  printf("Element dequeued is %d:",temp->data);
	  free(temp);	
	}
	else
	printf("queue is empty\n");
	if(f==NULL)
	r==NULL;
}
int main()
{
	do
	{
			int n;
	printf("Enter choice:\n");
	printf("1.For Enqueue\n2.For DEqueue\n3.For Display\n");
	scanf("%d",&n);
	switch(n)
	  {
		case 1:
			enqueue();
				break;
		case 2:
			dequeue();
			    break;
		case 3:
			display();
			    break;
      }
	}while(1);
}
