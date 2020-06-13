#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define pb push_back
#define ff first
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t,z,o,x,y,ans,u,v;
    cin>>t;
    string s;
    vector<pair<int,int>>zero,one;
    while(t--)
    {
        cin>>s;
        ans=0;
        one.clear();
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            if(s[i]=='0')
            {
                while(i<len&&s[i]=='0')
                    i++;
                x=i;
                while(i<len&&s[i]=='1')
                    i++;
                one.pb({x,--i});
            }
            else
            {
                x=i;
                while(i<len&&s[i]=='1')
                    i++;
                one.pb({x,--i});
            }
        }
        x=one[0].ff;
        int p,q;
        p=q=0;
        for(int i=one[0].ss+1;i<len;i++)
            if(s[i]=='1')p++;
        y=x+p;
        if(one[0].ss+1==len)y=0;
        ans=min(y,len-one[0].ss-1-p);
        z=one.size()-1;
        p=q=0;
        x=one[z].ff;
        for(int i=0;i<x;i++)
            if(s[i]=='1')p++;
        x=len-one[z].ss-1;
        ans=min(ans,min(x+p,one[z].ff-p));
        if(one[z].ff==0)ans=0;
        ///cout<<ans<<"#\n";
        if(ans==0){
            cout<<ans<<'\n';
            continue;
        }
        for(int i=1;i<z;i++)
        {
            p=q=u=v=0;
            for(int j=0;j<one[i].ff;j++)
                if(s[j]=='0')p++;
            q=one[i].ff-p;
            for(int j=one[i].ss+1;j<len;j++)
                if(s[j]=='0')u++;
            v=len-one[i].ss-1-u;
            //cout<<p<<' '<<q<<' '<<u<<' '<<v<<'\n';
            ans=min(ans,min(p+v,q+u));
            ///cout<<p<<' '<<q<<' '<<u<<' '<<v<<' '<<ans<<'\n';
        }
        cout<<ans<<'\n';
    }
    return 0;
}

