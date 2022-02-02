#include<stdio.h>
#include<stdlib.h>

struct stu *createnode();
void traversal();

struct stu 
{
	int data;
	struct stu *next;
}*head;


int main()
{
	struct stu *new=0,*temp=0;
	head=0;
	char ch='y';
	while(ch=='y')
	{
		new=createnode();
		if(head==NULL)
		{
			head=new;
		}
 		else
 		{
			temp->next=new;
		}
 		temp=new;
		printf("Do you want continue: ");
		scanf("\n%c",&ch);
	}
	traversal();
	return 0;
}

struct stu *createnode()
{
	struct stu *new;
	new=(struct stu *)malloc(sizeof(struct stu));
	printf("Enter data: ");
	scanf("%d",&new->data);
	new->next=0;
	return new;
}


void traversal()
{
	struct stu *ptr=0;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
		if(ptr!=NULL)
		{
			printf("-->");
		}	
	}
	printf("\n");
}
