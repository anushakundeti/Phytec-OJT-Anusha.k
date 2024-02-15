#include<stdio.h>
void main()
{
	int x=23;
	int *ptr;
	
	
	ptr =&x;
	
	printf("The address of variable x=%p\n",&x);
	printf("The value stored in the address %p=%d\n",ptr,*ptr);
}
