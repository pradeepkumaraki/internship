#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int m,n,maxy;
int conne(int *);
int findmax(int *, int, int);
int maxi(int,int);
int main() {
    
    cin>>m>>n;
    int array[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<conne((int *)array);

    return 0;
}

int conne(int *array)
{
    int ans = 0;
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
            if(*((array+i*n)+j) != 2)
            {
                if(*((array+i*n)+j)==1)
                {
                    maxy = 1;
                    *((array+i*n)+j) = 2;
                    findmax((int *)array,i,j);
                    ans = maxi(ans,maxy);     
                }
            }
        }
        
    }
    return ans;
}

int maxi(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else return b;
}
int findmax(int *array,int row,int column)
{

    for (int i = row-1; i<= row+1;i++)
    {
        for (int j = column-1; j <= column+1;j++)
        {
            if ((i>=0) && (j>=0) && (i < m) && (j < n) && !((i == row) && (j == column)))
            {
                    if (*((array+i*n)+j) == 1)
                    {   
                        *((array+i*n)+j) = 2;
                        maxy++;
                        maxy = findmax((int *)array,i,j);
                    }
                    

                
            }
        }
    }
    return maxy;
}
