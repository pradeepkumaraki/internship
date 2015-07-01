#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	string str[n];
	int a[n][26]={0},temp,count=0;
	for(i=0;i<n;i++)
	cin>>str[i];
    for(i=o;i<n;i++)
    {
    	for(k=0;k<26;k++)
    	{
    		temp=str[i][k]-97;
    		a[i][k]=a[i][k]+temp;
    	}
    }
    for(i=0;i<n;i++)
    {
    	for(k=0;k<26;k++)
    	{
    		if(a[i][k]!=0&&a)
    	}
    }

} 