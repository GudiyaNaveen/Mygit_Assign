#include<stdio.h>

void Mystrlen(char s[]);

int main()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]s",str);
	Mystrlen(str);
	return 0;
}

void Mystrlen(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++);
	printf("String Length: %d\n",i);
}

