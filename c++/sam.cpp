#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	long  i,b,count=0,a[310725]={0};
    // for(i=0;i<310725;i++)
	   //  {   
	   //  	count=count+(i*i);
	   //  	a[i]=count;
	   //  }
    while(n--)
	    { 
	    	long num,mid;
	    	cin>>num;
	        mid=310725/2;
	        chockos(num,mid,0,310724)
	    }

    chckos(long num,long mid,long lower,long upper)
	    {
          if(a[mid]==num)
          	return num;
          else if(a[mid]>num)
          {
            lower=mid;
            mid=(lower+upper)/2;
          }
	    }
return 0;
 }  



 10000120629148350
