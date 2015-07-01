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
	    string str;
	    char str1[10000];
	    int k,len=0,i,count=0;		
		cin>>str;
		len=str.length();
	    for(i=0,k=len-1;i<len&&k>=0;i++,k--)
	       str1[i]=str[k];
	    str1[i]='\0';
	    if(len>1)
	    {
		    for(i=0;i<len-1;i++)
		    {
	            if(abs(str[i+1]-str[i])==abs(str1[i+1]-str1[i]))
	        	count++;
		    }
	    }
	    else
			count=0;
	      if(count==len-1)
	        cout<<"Funny"<<endl;
		  else 
			cout<<"Not Funny"<<endl;
	    }
    return 0;

}
