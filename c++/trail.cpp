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
            long long n,a[100001],con,greater=0,count,ncon,i,k;
            cin>>n;
            a[0]=0;
            for(i=1;i<=n;i++)
                cin>>a[i];
            greater=gofcontinuous(n,a);        
            cout<<greater<<" ";
         }
     return 0;
}
long long gofcontinuous(long long n,long long a[100001])
{
    void continuous(long long,long long*,long long*,long long*,long long*,long long*,long long*,long long*); 
    long long current_sum = 0,current_index = -1,i=1,best_sum  = 0,best_start_index = -1,best_end_index = -1,val;
    long long con;
    static long long count=n;
    count=count-1;
    continuous(n,a,&current_sum,&current_index,&i,&best_sum,&best_start_index,&best_end_index);
    i++;
    if(count>0)
     gofcontinuous(n,a);
    return best_sum;
}

void continuous(long long n,long long a[100001],long long *current_sum,long long *current_index,long long *i,long long *best_sum,long long *best_start_index,long long *best_end_index)
{
    long long val;
        val = *current_sum + a[*i];
        if(val > 0)
            {
                if(*current_sum == 0)
                    {
                        *current_index = *i;
                    }
                *current_sum = val;
            }
        else
            {
              *current_sum = 0;
            }
     
        if(*current_sum > *best_sum)
            {
              *best_sum = *current_sum;
              *best_start_index = *current_index;
              *best_end_index = *i;
            }
   
}
