#include<stdio.h>
#include<conio.h>
void swap(int a,int b);
void main()
{
	int x=10;
	int y=20;
	printf("Before swapping numbers are:%d %d",x,y);
	swap(x,y);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping numbers are:%d %d",a,b);
}
