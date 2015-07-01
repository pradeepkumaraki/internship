#include<stdio.h>
#include<string.h>
main()
{
char str[10],str2[10];
int i;
printf("enter some string");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
str2[i]=str[i];
}
str2[i]='\0';
strrev(str);
if(strcmp(str,str2)==0)
printf("string is palindrome");

}

