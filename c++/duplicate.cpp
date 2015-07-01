#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	
	int i,n;
	cin>>n;
	
	while(n--)
	{
		string str;
		//getline(cin,str);
		cin>>str;
		//cout<<str;
		int count=0;
		for(i=1;i<str.length();i++)
			{
		        if(str[i-1]==str[i])
		        	count++;
			}
		cout<<count<<endl;
		
    }
    return 0;
}