#include<stdio.h>
#include<stdlib.h>
unsigned char nibble(unsigned char x)
{

	x=((x&0x0F)<<4)|((x&0xF0)>>4);
}

void main()
{
	unsigned char x=100;

		printf("%u\n",nibble(x));
}
