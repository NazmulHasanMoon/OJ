#include<bits/stdc++.h>
using namespace std;
int c;
void fun(int n,int i,int j, string *s)
{
    if(i==n||j==n||i<0||j<0)
        return ;
    if(s[i][j]=='T')
    {
        c++;
        s[i][j]='W';
        fun(n,i-1,j,s);
        fun(n,i+1,j,s);
        fun(n,i,j+1,s);
        fun(n,i,j-1,s);
    }
}
int main()
{
    int n,mx=-1;
    cin>>n;
    string s[1001];
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i][j]=='T')
            {
                fun(n,i,j,s);
                mx=max(mx,c);
                c=0;

            }
        }
    }
    cout<<mx<<'\n';
    return 0;
}
