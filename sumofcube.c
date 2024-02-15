#include <stdio.h>
void main() 
{
    	int n;
  	int sum = 0;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Please enter a non-negative integer.\n");
    }
    else 
    {
        for (int i = 1; i <= n; i++) 
	{
            sum += i * i * i;
        }

        printf("The sum of the cubes of the first %d natural numbers is: %d\n", n, sum);
    }

}

