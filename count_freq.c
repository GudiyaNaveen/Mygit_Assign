#include<stdio.h>
#define N 100
int main()
{
	int a[N],b[N],i,j,n,count=0;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	printf("Enter elements in array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				b[j]=0;
			}
		}
		if(b[i]!=0)
			b[i]=count;
	}
	printf("Count frequency of element in an array: \n");
	for(i=0;i<n;i++)
	{
		if(b[i]!=0)
			printf("frequency of %d: %d times\n",a[i],b[i]);
	}
	return 0;
}
