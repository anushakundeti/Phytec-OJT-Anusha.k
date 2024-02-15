/*#include<stdio.h>
void main()
{
	int a=10,b=30,c=90;
	if((a>b)&&(a>c))?printf("%d",a):printf("%d",b):printf("%d",c);
}

*/
#include <stdio.h>

int main() {
    int num1=100, num2=98, num3=9, max;

    // Input three numbers
//    printf("Enter three numbers: ");
  //  scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest using the ternary operator
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Print the result
    printf("The largest number is: %d\n", max);

    return 0;
}

