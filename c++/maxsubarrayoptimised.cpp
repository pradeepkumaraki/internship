#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int num;
    long long noncontinuous(long long,long long*);
    long long continuous(long long,long long*); 
    long long gofcontinuous(long long,long long*);
    cin>>num;
    while(num--)
         {
            long long n,a[100001],con,greater=0,ncon,i,k;
            cin>>n;
            a[0]=0;
            for(i=1;i<=n;i++)
                cin>>a[i];
            ncon=noncontinuous(n,a);
            greater=gofcontinuous(n,a);        
            cout<<greater<<" ";
            cout<<ncon;
         }
     return 0;
}
long long gofcontinuous(long long n,long long a[100001])
{
    long long continuous(long long,long long*); 
    long long greater=0,con;
    con=continuous(n,a);
    if(con>greater)
        greater=con;
    if(n==1&&a[1]>=0)
        return a[1];
    if(n==1&&a[1]<0)
        return a[1];
    gofcontinuous(n-1,a);
    return greater;
}

long long continuous(long long n,long long a[100001])
{
    long long sum=0;
    if(a[n]>=0&&n!=1)
    {
        sum=a[n]+continuous(n-1,a);
        return sum;
    }
    if(a[n]<0&&n!=1)
    {
        sum=a[n]+continuous(n-1,a);
        return sum;
    }
    if(a[n]>=0&&n==1)
        return a[1];
    if(a[n]<0&&n==1)
        return a[1];
    return 0;
}
long long noncontinuous(long long n,long long a[100001])
{
    long long sum=0;
    if(a[n]>=0&&n!=1)
    {
        sum=a[n]+noncontinuous(n-1,a);
        return sum;
    }
    if(a[n]<0&&n!=1)
    {
        sum=noncontinuous(n-1,a);
        return sum;
    }
    if(a[n]>=0&&n==1)
        return a[1];
    if(a[n]<0&&n==1)
        return 0;
    return 0;
}

    