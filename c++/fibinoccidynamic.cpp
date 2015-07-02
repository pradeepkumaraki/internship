#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int fibinocci(int,int*);
	int a,b,n,num,li[21]={0};
	cin>>a>>b>>n;
    li[0]=0;
    li[1]=a;
    li[2]=b;
    // cout<<li[0]<<li[1]<<li[2];  
    num=fibinocci(n,li);
    cout<<num;
}
   int fibinocci(int n,int li[21])
{
    // cout<<li[0]<<li[1]<<li[2];  
     int i;
    for(i=n;i>=3;i--)
            {
                  if(li[i]!=0)
                      {  
                       cout<<li[i];    
                       return li[i];
                      }
                   else 
                    {
                       li[i]=(fibinocci(i-1,li)*fibinocci(i-1,li))+fibinocci(i-2,li);
                       cout<<"in else"<<li[i];
                       return li[i];
                       
                    }          
           }
        return 0;
   
}

