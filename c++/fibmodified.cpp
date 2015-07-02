#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	long long fib(long long,long long*);
	long long  li[21],a,i,b,n,num;
	for(i=1;i<21;i++)
		li[i]=-1;
	cin>>a>>b>>n;
	li[1]=a;
	li[2]=b;
	num=fib(n,li);
	cout<<num;
	return 0;
}
long long fib(long long n,long long li[21])
{
		if(li[n]!=-1)
			{
				return li[n];
			}
		else
			{
				li[n]=(fib(n-1,li)*fib(n-1,li))+fib(n-2,li);
				return li[n];
			}
	return 0;
}

