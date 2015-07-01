#include<stdio.h>
#include<stdlib.h>
void ten(int);
void tenplus(int);
void unit(int);
void hundred();
void thousand();
void lakh();
main()
{
int n,a[10],i,count=0,dup;
printf("enter the number");
scanf("%d",&n);
dup=n;
while(n!=0) 
{
n=n/10;
count++;
}
n=dup;
for(i=0;i<count;i++)
{
a[i]=n%10;
n=n/10;
}
n=dup;
for(i=count;i>0;)
{
	if(i==7)
	{
		if(a[6]==1)
		{

			if(a[5]!=0)
			{
				tenplus(a[5]);
				lakh();
				i--;
				i--;
			}

			else if(a[5]==0)
			{
				unit(a[6]);
				lakh();
				i--;	
				i--;		     
			}
		
		}
		else if(a[6]==0)
		{
			i--;
		 }
		else 
	    {
		    if(a[5]!=0)
		    {
			 ten(a[6]);
			 unit(a[5]);
			 lakh();
			 i--;
			 i--;

		    }
		    else if(a[5]==0)
		    {
			 ten(a[6]);
			 lakh();
			 i--;
			 i--;
			}
		}
   
    }
    if(i==6)
	{
		if(a[5]!=0)
		{
	    unit(a[5]);
		lakh();
		i--;
	    }
	    else
	    {
	     i--;
	    }
	 
    }

	if(i==5)
	{
		if(a[4]==1)
		{

			if(a[3]!=0)
			{
				tenplus(a[3]);
				thousand();
				i--;
				i--;
			}
			
			else if(a[3]==0)
			{
				unit(a[4]);
				thousand();
				i--;
				i--;			     
			}
		
		}
		else if(a[4]==0)
		   {
			i--;
		   } 

		else
	    {
		    if(a[3]!=0)
		     {
			 ten(a[4]);
			 unit(a[3]);
			 thousand();
			 i--;
			 i--;
		     }
		     
		    else if(a[3]==0)
		     {
			 ten(a[4]);
			 thousand();
			 i--;
			 i--;
			}

		}
	
	}

    if(i==4)
	{   
		if(a[3]!=0)
		{
		unit(a[3]);
		thousand();
		i--;
        }
     	else
     	i--;
    }


    if(i==3)
	{
		if(a[2]!=0)
		{
		unit(a[2]);
		hundred();
		i--;
     	}
     	else 
     	i--;
    

	}
    if(i==2)
	{
		if(a[1]==1)
		{

			if(a[0]!=0)
			{
				tenplus(a[0]);
				i--;
				i--;
			}
			else if(a[0]==0)
			{ 
			printf("ten");
			 i--;	
			 i--;		     
			}

		}
		else if(a[1]==0)
			i--;
        else
	    {
		    if(a[0]!=0)
		     {
			 ten(a[1]);
			 unit(a[0]);
			 i--;
			 i--;
		     }
		    
		    else if(a[0]==0)
		     {
			ten(a[1]);
			 i--;
			 i--;
		     }
		}
			
	}
	if(i==1)
	{
		if(a[0]!=0)
		{
		unit(a[0]);
		i--;
	    }
	    else 
	    {
	    i--;	
	    }
	 
	}
	
 }
 
}

void lakh()
{
	printf("lakhs\t");
}
void thousand()
{
	printf("thousand\t");
}
void hundred()
{
	printf("hundred\t");
}
void ten(int num)
{
	switch(num)
	{
		case 1:
		 printf("ten\t");
		 break;
		case 2:
		 printf("twenty\t");
		 break;
		case 3:
		 printf("thirty\t");
		 break;
		case 4:
		 printf("fourty\t");
		 break;
		case 5:
		 printf("fifty\t");
		 break;
		 case 6:
		  printf("sixty\t");
		  break;
		 case 7:
		  printf("seventy\t");
		  break;
		 case 8:
		  printf("eighty\t");
		  break;
		 case 9:
		  printf("ninety\t");
		  break;
	}
}
void unit(int num)
{
	 switch(num)
	 {
	 	case 1:
	  	 printf("one\t");
	 	 break;
	 	case 2:
	 	 printf("two\t");
	 	 break;
	 	case 3:
	 	 printf("three\t");
	 	 break;
	 	case 4:
	 	 printf("four\t");
	 	 break;
	 	case 5:
	 	 printf("five\t");
	 	 break;
	 	case 6:
	 	 printf("six\t");
	 	 break;
	 	case 7:
	 	 printf("seven\t");
	 	 break;
	 	case 8:
	 	 printf("eight\t");
	 	 break;
	 	case 9:
	 	 printf("nine\t");
	 	 break;
	 }
}
void tenplus(int num)
{
	switch(num)
	{
		case 1:
		  printf("eleven\t");
		  break;
		case 2:
		  printf("twelve\t");
		  break;
		case 3:
		  printf("thirteen\t");
		  break;
		case 4:
		  printf("fourteen\t");
		  break;
		case 5:
		  printf("fifteen\t");
		  break;
		case 6:
		  printf("sixteen\t");
		  break;
		case 7:
		  printf("seventeen\t");
		  break;
		case 8:
		  printf("eighteen\t");
		  break;
		case 9:
		  printf("nineteen\t");
		  break;
  	}
}
