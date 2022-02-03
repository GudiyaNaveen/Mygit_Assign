#include<stdio.h>
#define N 100

void insert(int a[],int,int,int);
void delete(int a[],int,int);

int main()
{
	int a[N],i,n,pos1,ele,pos2;
	printf("Enter a size of an array: ");
	scanf("%d",&n);
	printf("Enter a elements in an array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a position for insert element in an array: ");
	scanf("%d",&pos1);
	printf("Enter a elements for insert in an array: ");
	scanf("%d",&ele);
	insert(a,pos1,ele,n);
	printf("Enter a position for delete element in an array: ");
	scanf("%d",&pos2);
	delete(a,pos2,n);
	return 0;
}

void insert(int a[],int pos,int ele,int n)
{
	int i,j;
	for(j=n;j>=pos;j--)
	{
		a[j]=a[j-1];
	}
	a[pos--]=ele;
	printf("After inserted element in an array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

void delete(int a[],int pos,int n)
{
	int i;
	if(pos>=n+1)
	{
		printf("Deletion is not possible\n");
	}
	else
	{
		for(i=pos-1;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		printf("After deletion element in an array: \n");
		for(i=0;i<n-1;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");
	}
}
