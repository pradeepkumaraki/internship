#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
 	int n;
 	string str1,str2;
	cin>>n;
	while(n--)
	{
		cin>>str1;
		cin>>str2;
		int i,a[26]={0},temp, count=0;
		for(i=0;i<str1.length();i++)
		{
			temp=str1[i]-97;
			a[temp]=1;
		}
        for(i=0;i<str2.length();i++)
        {
        	temp=str2[i]-97;
        	if(a[temp]==1)
        		count++;
        }
        //cout<<"n:"<<n<<"count:"<<count;
        if(count>=1)
        	cout<<"YES\n";
        else
        	cout<<"NO\n";
     
	}
	return 0;
}