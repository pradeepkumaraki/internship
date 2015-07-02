#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	long long i,a[20],n;
    cin>>a[0]>>a[1]>>n;
    for(i=2;i<n;i++)
    {
       a[i]=pow(a[i-1],2)+a[i-2];
       cout<<a[i]<<endl;
    }
    return 0;
}