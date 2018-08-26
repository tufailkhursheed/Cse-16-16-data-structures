#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* tree,*ptr;
void create_tree(struct node* tree);
struct node *insertelement(struct node* tree,int );
struct node* findsmallest(struct node* tree);
struct node* Del(struct node *tree,int data);
struct node* findmin(struct node* tree);
struct node* search(struct node* tree,int data);
int main()
{
create_tree(tree);
int n,val,d;
do
   {
    printf("Enter Choice:\n");
	printf(" 1.For Inserting An Element\n 2.For PreOrder Traversal\n 3.For Finding smallest element\n 4.For Searching\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("enter value of the new node\n");
			scanf("%d",&val);
			tree=insertelement(tree,val);
			break;
		case 2:
			printf("The Elements Of  the Tree are:\n");
			preorder(tree);
			break;;
		case 3:
			printf("Smallest Elemnt is:");
			ptr=findsmallest(tree);
			printf("%d\n",ptr->data);
			break;
		case 4:
			printf("Enter the Element to be searched\n");
			scanf("%d",&val);
			tree=search(tree,d);    
		}	
   }while(1);
}
void create_tree(struct node* tree)
{
	tree=NULL;
}
struct node *insertelement(struct node* tree,int val)
{
	struct node* ptr,*parentptr,*nodeptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=val;
	ptr->left=NULL;
	ptr->right=NULL;
	if(tree==NULL)
	{
		tree=ptr;
		tree->left=NULL;
		tree->right=NULL;
	}
	else
{
		
    parentptr=NULL;
    nodeptr=tree;
    while(nodeptr!=NULL)
    {
    parentptr=nodeptr;
    if(val<nodeptr->data)
    nodeptr=nodeptr->left;
    else
    nodeptr=nodeptr->right;
	}
	if(val<parentptr->data)
	parentptr->left=ptr;
	else
	parentptr->right=ptr;
}
return tree;
}
void preorder(struct node *tree)
{
	if(tree!=NULL)
	{
		printf("%d\t",tree->data);
		preorder(tree->left);
		preorder(tree->right);
	}
}
struct node* findsmallest(struct node* tree)
{
	if((tree==NULL)||(tree->left==NULL))
	return tree;
	else
	return findsmallest(tree->left);
}
struct node* search(struct node* tree,int d)
{
	if(tree==NULL||tree->data==d)
	return tree;
	if(tree->data<d)
	return search(tree->right,d);
    else
	return search(tree->left,d);
}
