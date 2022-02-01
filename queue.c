#include<stdio.h>
#define N 6

void enqueue(int data);
void dequeue();
void display();

int front=-1;
int rear=-1;

int queue[N];

int main()
{
	int ch;
	do
	{
		int n,data;
		printf("1.Enqueue\n2.Dequeue\n3.Display\n");
		printf("Enter above choice: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("Enter data: ");
				scanf("%d",&data);
				enqueue(data);
				break;
			case 2:
				dequeue();
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

void enqueue(int data)
{
	if(rear==N-1)
	{
		printf("queue is full\n");
		return;
	}
	else
	{
	if(front==-1)
		front=0;
	rear++;
	queue[rear]=data;
	}
}


void dequeue()
{
	if(front==-1)
	{
	printf("queue is empty\n");
	return;
	}
	else
	{
	printf("deleted data is: %d\n",queue[front]);
	front++;
	}
}


void display()
{
	if(rear==-1)
	{
	printf("queue is empty\n");
	}
	else
	{
		int i;
		for(i=front;i<rear;i++)
			printf("%d\t",queue[i]);
		printf("\n");
	}
}
