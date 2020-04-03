#include<bits/stdc++.h>
using namespace std;
int vis[10001];
void fun(int beg,int i,string s)
{
    int mid=(beg+i)/2;
    if(vis[mid])
        return;
    cout<<s[mid];
    vis[mid]=1;
    fun(beg,mid-1,s);
    fun(mid+1,i,s);
}
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        memset(vis,0,sizeof(vis));
        fun(0,n-1,s);
        cout<<'\n';
    }
    return 0;
}
