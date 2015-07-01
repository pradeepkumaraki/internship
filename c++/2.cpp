#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    string str;
	int k,n,len=0,i,a,b,count=0;
	cin>>n;
     while(n>0)
     {
	
	cin>>str;
	for(i=0;str[i]!='\0';i++)
	len++;
	if(len>1)
	{
	  for(i=0,k=len-1;i<len&&k>=0;i++,k--)
	  {
       a=str[i+1]-str[i];
       b=str[k-1]-str[k];
       if((a>0?a:-a)==(b>0?b:-b))
       	count++;
	  }
    }
    else
    	count=0;
  	if(count==len-1)
		cout<<"Funny"<<endl;
	else 
		cout<<"Not Funny"<<endl;
	n--;
    }
    return 0;

}