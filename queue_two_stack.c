#include<stdio.h>
#define N 5

void push_stack1(int );
void push_stack2(int );
int pop_stack1();
int pop_stack2();
void enqueue(int );
void dequeue();
void display();

int stack1[N],stack2[N];
int top1=-1;
int top2=-1;
int count=0;

int main()
{
	int ch,n,x;
	do
	{
		printf("1.Enqueue\n2.Dequeue\n3.Display\n");
		printf("Enter above choice: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				printf("Enter data: ");
				scanf("%d",&n);
				enqueue(n);
				break;
			case 2: dequeue();
				break;
			case 3: display();
				break;
			default: goto EXIT;
		}	
	}while(ch!=0);
	EXIT:printf("Executed Successfully\n");
	return 0;
}


void push_stack1(int data)
{
	if(top1==N-1)
	{
		printf("Stack1 is full\n ");
		return;
	}
	else
	{
		top1++;
		stack1[top1]=data;
	}
}


void push_stack2(int data)
{
	if(top2==N-1)
	{
		printf("Stack2 is full\n");
		return;
	}
	else
	{
		top2++;
		stack2[top2]==data;
	}
}



int pop_stack1()
{
	if(top1==-1)
	{
		printf("Stack1 is empty\n");
		return -1;
	}
	return stack1[top1--];
}



int pop_stack2()
{
	if(top2==-1)
	{
		printf("Stack2 is empty\n");
		return -1;
	}
	return stack2[top2--];
}


void enqueue(int data)
{
	push_stack1(data);
	count++;
}


void dequeue()
{
	if(top1==-1 && top2==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		int i,temp,x;
		for(i=0;i<count;i++)
		{
			temp=pop_stack1();
			push_stack2(temp);
		}	
		x=pop_stack2();
		printf("Dequeued data: %d\n",x);
		count--;
		for(i=0;i<count;i++)
		{
			temp=pop_stack2();
			push_stack1(temp);
		}
		
	}
}



void display ()
{
	int i;
	if (top1==-1)
    	{
		printf("Queue is empty \n");
		return;
    	}
  	for (i=0;i<top1;i++)
	{
    		printf ("%d\t", stack1[i]);
	} 
	printf ("\n");
} 
