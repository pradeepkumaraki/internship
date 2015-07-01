#include<stdio.h>
main()
{
int num,i,sum=0;
printf("enter some  number");
scanf("%d",&num);
for(i=1;i<num;i++)
{
if(num%i==0)
{
sum=sum+i;
}
}
if(sum==num)
{
printf("the number is perfect number");
}
else
printf("the number is not perfect number");
}

