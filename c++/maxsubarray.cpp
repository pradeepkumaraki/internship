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

    cin>>num;
    while(num--)
         {
            long long n,a[100001],con,greater=0,ncon,i,k;
            cin>>n;
            a[0]=0;
            for(i=1;i<=n;i++)
                cin>>a[i];
            ncon=noncontinuous(n,a);
            con=continuous(n,a);
            cout<<con<<" ";
            cout<<ncon<<endl;
         }
     return 0;
}
long long continuous(long long n,long long a[]){
    long long  i,val,current_sum = 0;
    long long  current_index = 0;
    long long  best_sum = 0;
    long long  best_start = 0;
    long long  best_end = 0;
    long long  least = a[0];
    long long flag =0;
    long long sum(long long*,long long,long long);
    for ( i = 1; i <=n; ++i){
         val = current_sum + a[i];
        if(val > 0){
            if(current_sum == 0){
                current_index = i;
            }
            current_sum = val;
        }
        else{
            current_sum = 0;
            flag++;
            if (a[i] > least )
            {
                least = a[i];
            }
        }

        if(current_sum > best_sum){
            best_sum = current_sum;
            best_start = current_index;
            best_end = i;   
        }
    }
    if (flag == n)
    {
        return least;
    }
    else
    return sum(a,best_start,best_end);
}
long long noncontinuous(long long n,long long a[100001])
{
    long long sum=0,i,neg=a[1],flag=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]>=0)
        {
            sum=sum+a[i];
        }
        else
        {   
            flag++;
            if(a[i]>neg)
                neg=a[i];
        }
    }
    if(flag==n)
        return neg;
    else 
        return sum;
}
long long  sum(long long  a[],long long i,long long j){
    long long sum = 0;
    for (;i<=j;i++)
    {
        sum =sum + a[i];
    }
    return sum;
}


    