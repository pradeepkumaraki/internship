#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
 long chockos(long long,long,long);
 long long value(long);
	int n;
	cin>>n;
	while(n--)
	{
		long long lower,upper,num,count;
		cin>>num;
		upper=310725;
		lower=0;
		count=chockos(num,lower,upper);
		cout<<count<<endl;
	}
return 0;
}
long chockos(long long num,long lower,long upper)
	{
	   long long value(long);
       int mid,x;
       mid=(lower+upper)/2;
     if(value(mid)<num && lower+1!=upper)
	       {
	       	lower=mid;
	       	x=chockos(num,lower,upper);
	       	return x;
	       }
	 else if(value(mid)>num && lower+1!=upper)
		   {
		   	upper=mid;
		   	x=chockos(num,lower,upper);
		   	return x;
		   }
	  else if(value(mid)==num)
	     	 return mid;
	  else if(value(lower)==num || lower+1==upper)
	     	 return lower;
	  else if(value(upper)==num)
	      	return upper;
       return 0;
	}
long long value(long val)
	{
	     long long sum;
	     sum=((2*pow(val,3))+(3*pow(val,2))+val)/6;
	     return sum;        
	}