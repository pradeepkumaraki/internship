#include<stdio.h>
main()
{

int  num,i,a[10],k,b[10];
printf("enter some number");
scanf("%d",&num);
i=0;
for(;num>=0;){
k=num%2;
a[i++]=k;
num=num/2;
}
for(k=0;i>=0;i--,k++)
b[k]=a[i];
for(i=0;i<k;i++)
printf("%d",b[i]);

}


