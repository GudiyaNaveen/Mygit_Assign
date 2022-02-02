#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a range: ");
	scanf("%d",&n);
	printf("Even numbers are: ");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	printf("Odd numbers are: ");
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
