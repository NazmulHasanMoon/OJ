#include<bits/stdc++.h>
using namespace std;
int n;
bool isSafe(int row,int col,int a[11][11])
{
    for(int i=0; i<n; i++)
        if(a[row][i]==1)
            return false;
    for(int i=0; i<n; i++)
        if(a[i][col]==1)
            return false;
    int p,q;
    if(row<col)
        p=0,q=abs(row-col);
    else
        q=0,p=abs(row-col);
    for(; p<n&&q<n; p++,q++)
        if(a[p][q])
            return false;
    if(row+col>=n)
        q=n-1,p=row+col-q;
    else
        p=0,q=row+col;
    for(; p<n&&q>=0; p++,q--)
        if(a[p][q])
            return false;
    return true;
}
bool fun(int N,int a[11][11],int row)
{
    if(N==row)
        return true;
    //for(int row=0;row<n;row++)
    //{
    for(int col=0; col<n; col++)
    {
        if(isSafe(row,col,a))
        {
            a[row][col]=1;
            if(fun(N,a,row+1)) //if(fun(N-1,a))
            {
                return true;
            }
            a[row][col]=0;
        }
    }
    //}
    return false;
}
int main()
{
    int N;
    int a[11][11];
    memset(a,0,sizeof(a));
    cin>>n;
    N=n;
    bool res=fun(N,a,0);
    if(res)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<<a[i][j]<<((j+1==n)?'\n':' ');
        }
    }
    else
        cout<<"Not possible\n";
    return 0;
}
