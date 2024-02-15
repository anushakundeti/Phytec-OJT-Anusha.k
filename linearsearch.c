#include <stdio.h>

int search(int array[], int n, int x)
{

	// Going through array sequencially
	for (int i = 0; i < n; i++)
		if (array[i] == x)
			return i;
	return -1;
}
void main()
{

	int n,x,i;
	int array[n];
	printf("enter size\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("enter element to serach");
	scanf("%d",&x);
	printf("%d\n",search(array,n,x));

}
