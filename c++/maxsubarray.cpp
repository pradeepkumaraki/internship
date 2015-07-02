#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long noncontinuous(long long ,long long*);
    long long continuous(long long,long long*);
  	int n;
	cin>>n;
	while(n--)
		{
			long long num,con,ncon,greater,i,a[100001];
			cin>>num;
			a[0]=0;
			for(i=1;i<=num;i++)
				cin>>a[i];
            for(i=1;i<=num;i++)
            {
	            con=continuous(i,a);
	            if(con>=greater)
	            greater=con;
	        }
	        cout<<"hey";
            ncon=noncontinuous(num,a);
            cout<<greater;
            cout<<ncon;
		}
	return 0;
}
long long continuous(long long num,long long a[100001])
{
   long long sum=0,greater=0,i;
   	   	if(a[i]>0)
   	   	{
		   	sum=a[num]+continuous(num-1,a);
		    return sum;
		}	   
		else if(a[num]>0&&num==1)
			return a[num];
		else if(a[num]<0&&num==1)
			return 0;
		else
		  	return 0;			
	return 0;
}
long long noncontinuous(long long num,long long a[100001])
{
	// int i;
	// for(i=0;i<=num;i++)
	// cout<<a[i]<<endl;
	long long  sum=0;
	      // cout<<"in fun hey";
		if(a[num]>0)
		{   
			sum=a[num]+noncontinuous(num-1,a);
			return sum;
		}
		else if(a[num]>0 && num==1)
			return a[1];
		else if(a[num]<0 && num==1)
			return 0;
		else
		  {
		  	sum=noncontinuous(num-1,a);
		  	return sum;
		  }	
return 0;
}