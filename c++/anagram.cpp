#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string str,str1,str2;
		int i,k,a[26]={0},b[26]={0},temp,temp1,count=0;
		cin>>str;
		temp1=str.length()/2;
		if((str.length()%2)==0)
		{
			
	        for(i=0;i<temp1;i++)
		        {
		        	temp=str[i]-97;
		        	a[temp]=a[temp]+1;
		        }
	        for(i=temp1;i<str.length();i++)
		        {
		        	temp=str[i]-97;
		        	b[temp]=b[temp]+1;
		        }
		    for(i=0;i<26;i++)
		        {
		        	if((b[i]-a[i])>0)
		        		count=count+(b[i]-a[i]);
		        }
		    cout<<count<<endl;

        }
        else
        	cout<<"-1"<<endl;
     
	}
	return 0;
}