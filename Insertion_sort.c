#include <stdio.h>
#define N 100
int main()
{
    int a[N],n,i,j,temp;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    printf("Enter elements in an array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before sorting elements in an array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
     printf("After sorting elements in an array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    return 0;
}

