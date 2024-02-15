#include <stdio.h>

int main()
{
    int num;
    long long factorial = 1;

    do
{
        printf("Enter a positive number: ");
        scanf("%d", &num);
        if (num < 0)
{
            printf("Please enter a positive number.\n");
        }

    } while (num < 0);

    int i = 1;
    do
{
        factorial *= i;
        i++;
    } while (i <= num);

    printf("Factorial of %d is: %lld\n", num, factorial);

    return 0;
}


