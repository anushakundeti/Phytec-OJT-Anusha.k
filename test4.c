#include <stdio.h>
void main() 
{
int i;
  int x[5] = {1, 2, 3, 4, 5};
  int* ptr;

  
  ptr = &x[2]; 

  printf("*ptr = %d \n", *ptr);   
  printf("*(ptr+i) = %d \n", (*ptr+i)); 
  printf("*(ptr-i) = %d",( *ptr-i));  

  
}
