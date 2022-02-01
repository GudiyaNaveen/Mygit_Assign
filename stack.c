#include<stdio.h>
#define N 5

void push(int );
void pop();
void display();

int stack[N];
int top=-1;

int main()
{
	int ch,data;
	do
	{
		printf("1.push\n2.pop\n3.Display\n");
		printf("Enter above choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter data: ");
				scanf("%d",&data);
				push(data);
				break;	
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			default:
				goto EXIT;
		}
	}while(ch!=0);
	EXIT:printf("Executed Successfully\n");
	return 0;
}


void push(int data)
{
	if(top==N-1)
	{
	printf("stack is full\n");
	return;
	}
	else
	{
		top++;
		stack[top]=data;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("stack is empty\n");
	return;
	}
	else
	{	
		printf("popped data %d\n",stack[top]);
		top--;
	}
}

void display()
{
	if(top==-1)
	{
		printf("stack is empty\n");
		return;
	}
	int i;
	for(i=0;i<top;i++)
		printf("%d->",stack[i]);
	printf("\n");
}

