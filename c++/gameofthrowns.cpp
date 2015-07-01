#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	int temp,i,a[26]={0},count=0;
	cin>>str;
	for(i=0;i<str.length();i++)
	{
		temp=str[i]-97;
		a[temp]=a[temp]+1;
	}
	for(i=0;i<26;i++)
	{
		temp=a[i]%2;
		count=count+temp;
	}
	if(count==1||count==0)
		cout<<"YES";
	else
		cout<<"NO";
}