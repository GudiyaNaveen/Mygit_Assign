#include<stdio.h>

int main()
{
	int x,y,add,sub;
	char ch;
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	printf("a.for addition\ns.for substraction\n");
	printf("Enter above choice: ");
	scanf("\n%c",&ch);
	switch(ch)
	{
		case 'a':
			add=x+y;
			printf("Addition of two numbers: %d\n",add);
			break;
		case 's':
     			sub=x-y;
			printf("Substraction of two numbers: %d\n",sub);
			break;
		default:
			printf("defaut case- noaction\n");
			break;
	}
	return 0;
}
