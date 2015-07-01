#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
int main()
{
	int convert(string);
	string  str;
	getline(cin,str);
	convert(str);
	cout<<str<<endl;

	return 0;
}
int convert(string& str)
{
	int i;
	for(i=0;i<str.length();i++)
		str[i]=toupper(str[i]);
	return 0;
}
