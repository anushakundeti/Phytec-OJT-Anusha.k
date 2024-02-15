#include<stdio.h>
void swap(int *a,int *b)
{
	int t;
	 t= *a;
	*a= *b;
	*b= t;
}
void main()
{
	int a,b;
	printf("enter values of a and b\n");
	scanf("%d %d" ,&a,&b);
	swap(&a,&b);
	printf("%d %d\n",a,b);
}

