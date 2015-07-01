#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
int main()
{
	int x,len=0,i,temp,a[26]={0},count=0;
	string  str;
	getline(cin,str);
	for(i=0;i<str.length();i++)
		str[i]=tolower(str[i]);
	for(i=0;i<str.length();i++)
   	{
   		if(str[i]!=' ')
   		{
		temp=str[i]-97;
		   if(a[temp]==0)
		   {
			a[temp]=1;
			count++;
		   }
	    }
	    else
	    	continue;
	}
	if(count==26)
		cout<<"pangram ";
	else
		cout<<"not pangram ";

	return 0;
}
