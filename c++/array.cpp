#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int conmax(int a[]);
int nonmax(int a[]);
int s;
int sum(int a[],int x, int y);
int n;
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i){
		    	cin>>a[i];
		}
		cout<<conmax(a)<<" ";
		cout<<nonmax(a)<<endl;
	}
}
int conmax(int a[]){
	int current_sum = 0;
	int current_index = 0;
	int best_sum = 0;
	int best_start = 0;
	int best_end = 0;
	int least = a[0];
	int flag =0;
	for (int i = 0; i < n; ++i){
		int val = current_sum + a[i];
		if(val > 0){
			if(current_sum == 0){
				current_index = i;
			}
			current_sum = val;
		}
		else{
			current_sum = 0;
			flag++;
			if (a[i] > least )
			{
				least = a[i];
			}
		}

		if(current_sum > best_sum){
			best_sum = current_sum;
			best_start = current_index;
			best_end = i;	
		}
	}
	if (flag == n)
	{
		return least;
	}
	else
	return sum(a,best_start,best_end);
}

int nonmax(int a[]){
	int s = 0,f=0;
	int le = a[0];
	for (int i = 0; i < n; ++i){
		
		if(a[i] > 0){
				s =s + a[i];
	            
		}
		else{
			f++;
			if (a[i] > le )
				{
					le = a[i];
				}
			}
		}
		if(f == n){
			return le;
		}
		else return s;
}

int sum(int a[],int i,int j){
	int sum = 0;
	for (; i <= j; ++i)
	{
		sum =sum + a[i];
	}
	return sum;
}
