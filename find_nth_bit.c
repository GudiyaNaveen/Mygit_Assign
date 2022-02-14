#include<stdio.h>

void find_n_bit(int ,int );
int main()
{
	int x,n;
  printf("Enter a number: ");
  scanf("%d",&x);
	printf("Enter nth bit\n");
	scanf("%d",&n);
	find_n_bit(x,n);
	return 0;
}

void find_n_bit(int x,int n)
{
  if(x & 0x1<<n)
  {
		printf("%d th bit is set\n",n);
  }
	else
  {
		printf("%d th bit is not set\n",n);
  }
}
