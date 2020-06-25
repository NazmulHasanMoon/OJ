#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=1,c,i,j,k,n;
    scanf("%d",&n);
    map<int,int>mp;
    for(i=1;a<n;i++)
    {
        c=a+b;
        a=b;
        mp[a]=1;
        //cout<<a<<endl;
        b=c;
    }
    //cout<<i<<endl;
    for(j=1;j<=n;j++)
    {
        if(mp.find(j)!=mp.end())
            cout<<"O";
        else
            cout<<"o";
    }
    cout<<endl;
    return 0;
}

