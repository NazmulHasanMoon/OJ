#include<bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        vector<int>v(n+1,1);
        for(int i=1;i<=n;i++)
        {
            for(int j=i*2;j<=n;j+=i)
            {
                if(a[j]>a[i])
                    v[j]=max(v[j],v[i]+1);
            }
        }
        int rs=1;
        for(int i=1;i<=n;i++)
            rs=max(rs,v[i]);
        cout<<rs<<'\n';
    }
    return 0;
}
