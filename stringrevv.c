#include <stdio.h>

/*int main() 
{
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]s", str);

	char *start = str;
	char *end = start;
	while (*end != '\0') 
	{
		end++;
	}
	end--;

	while (start < end) 
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

	printf("Reversed string: %s\n", str);

	return 0;
}
*/



void main()
{
	char str[100];
	char *start;
	char *end;
	printf("enter string\n");
	scanf("%[^\n]s",str);

	start=str;
	end=start;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(start<end)
	{
		char temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
	printf("reversed string :%s",str);
}
