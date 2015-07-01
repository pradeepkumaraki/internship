#include<stdio.h>
#include<string.h>
main()
{
	char *val1[]={" ","one","two","three","four","five","six","seven","eight","nine"},*val2[]={" ","eleven","twelve","thirteen","fourteen","fifteen","sixteen","eighteen","nineteen"},
                 *val3[]={" "," ","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"},*val4[]={" "," "," ","hundred","thousnd","thousand","lakhs","lakhs ","crores","crores"};
	
int i,k,a[15],n,count=0,dup;
printf("enter the number");

scanf("%d",&n);
dup=n;
while(n!=0){
n=n/10;
count++;
}
n=dup;
a[0]=0;
for(i=1;i<=count;i++){
       a[i]=n%10;
       n=n/10;
     }
for(i=count;i>0;i--){
  if(i>3){
  	if(i%2==0){
  		printf("%s\t",val1[a[i]]);
  		printf("%s\t",val4[i]);
  	}
  	else{  
  		if(a[i]==1){
  		    printf("%s\t",val2[a[--i]]);
          printf("%s\t",val4[i]);
  		}
  		else{
  		printf("%s\t",val3[a[i]]);
  		printf("%s\t",val1[a[--i]]);
  		printf("%s\t",val4[i]);
  	    }
  	}
  }
  else{
  	if(i%2==0){ 
  		 if(a[i]==1)
  		   printf("%s\t",val2[a[--i]]);
  		 else	
  		 	printf("%s\t",val3[a[i]]);
  	}
  	else if(i==1)
  		 printf("%s\t",val1[a[i]]);
  	else{
       printf("%s\t",val1[a[i]]);
       printf("%s\t",val4[i]);
  	}
  	
    }
}
}
int
