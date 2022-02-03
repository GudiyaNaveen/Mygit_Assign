#include<stdio.h>

void find_first_word(char str[],char find[]);

int main()
{
	char str[100],find[100];
	printf("Entera string: ");
	scanf("%[^\n]s",str);
	printf("Enter a word to be searched in a string: ");
	scanf("%s",find);
	find_first_word(str,find);
	return 0;
}

void find_first_word(char str[],char find[])
{
	int i,index,found=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==find[0])
		{
			index=0;
			found=1;
			for(index=1;find[index]!='\0';index++)
			{
				if(str[i+index]!=find[index])
				{
					found=0;
					break;
				}
				index++;
			}
		}
		if(found=1)
		{
			break;
		}
	}
	if(found==1)
		printf("Word '%s' is first occurred at location: %d\n",find,index);
	else
		printf("'%s' is not occurred in a string\n",find);
}
