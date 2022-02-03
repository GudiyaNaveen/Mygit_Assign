#include <stdio.h>

int main()
{
    char s1[100],s2[100],temp;
    int i=0,j=0,l=0,flag;
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("%s\n",s2);
    for(i=0,j=l-1;i<l/2;i++,j--)
    {
        temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
    }
    printf("Reverse of string: %s\n",s1);
    for(i=0;i<l;i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("%s is palindrome\n",s2);
    }
    else
    {
        printf("%s is not a palindrome\n",s2);
    }
    return 0;
}
