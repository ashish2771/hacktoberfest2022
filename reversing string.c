#include<stdio.h>
#include<string.h>
int main()
{
int i;
char a[30] ,b[30];
//printf("enter the value of n\n");
//scanf("%d",&n);
printf("enter the string\n");
gets(a);
for (i=0;i<strlen(a);i++)
{
    b[i] = a[strlen(a)-1-i];
}
puts(b);
}