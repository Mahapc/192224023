#include<stdio.h>


void addition(int *a,int *b)
{
	printf("sum of the two given number is %d",*a+*b);
}
int main()
{
	int addition (int *a,int *b);
	int c,d;
	printf("enter two numbers to add :");
	scanf("%d%d",&c,&d);
	addition(&c,&d);
}

