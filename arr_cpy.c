#include<stdio.h>
#define N 100
int main()
{
	int arr1[N],arr2[N],i,n;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	printf("Enter an elements in an array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}	
	for(i=0;i<n;i++)
	{
		arr2[i]=arr1[i];
	}
	printf("Copy of elements in arr2[]<--arr1[]: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr2[i]);
	}
	printf("\n");
	return 0;
}
