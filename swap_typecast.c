#include<stdio.h>
void swap(void *a,void *b)
{
    *(int *)a = ( *(int*)a * *(int *)b)/(*(int*)b = *(int *)a);
    printf("After swap : A =%d,B=%d\n",*(int*)a,*(int*)b);
    return ;
}
int main()
{
    int a=439,b=451;
    printf("Before swap : A = %d , B =%d\n",a,b);
    swap(&a,&b);
    return 0;
}
