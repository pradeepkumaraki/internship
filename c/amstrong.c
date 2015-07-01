#include<stdio.h>
main(){
int num,num1,i,sum=0;
printf("enter some number");
scanf("%d",&num);
num1=num;
for(;num!=0;)
{
i=num%10;
sum=sum+(i*i*i);
num=num/10;
}
if(sum==num1)
printf("number is armstrong number");
}

