#include<stdio.h>
void main()
{
	int x=10,y=20;
	int *ptr,*ptr2;

	ptr=&x;
	ptr2=&y;

	printf("Address of x:%p\n",ptr);
	printf("Address of y:%p\n",ptr2);

	ptr++;
	ptr2--;


	printf("Incremented ptr:%p\n",ptr);
	printf("decremented ptr2:%p\n",ptr2);

}
