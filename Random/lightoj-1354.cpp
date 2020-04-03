#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int main()
{
    //faster
    int t,i(1);
    sf("%d",&t);
    map<int,int>mp;
    mp[0]=128,mp[1]=64,mp[2]=32,mp[3]=16,mp[4]=8,mp[5]=4,mp[6]=2,mp[7]=1;
    while(i<=t)
    {
        //string a,b;
        char a[40],b[40];
        sf("%s\n%s",a,b);
        int x[5];
        x[0]=0;
        for(int j=0,k=0;a[j]!='\0';j++){
            if(a[j]=='.')
                x[++k]=0;
            else
                x[k]=(x[k]*10)+a[j]-'0';
        }
        int y=0;
        bool t=true;
        for(int j=0,k=0,l=0;b[j]!='\0';j++)
        {
            if(b[j]=='.')
            {
                if(y!=x[k])
                    t=false;
                //cout<<y<<'-'<<k<<endl;
                y=0;
                l=0;
                k++;
            }
            else
            {
                if(b[j]=='1')
                    y+=mp[l];
                l++;
            }
            if(!t)
                break;
        }
        if(y!=x[3])
            t=false;
        if(t)
            pf("Case %d: Yes\n",i++);
        else
            pf("Case %d: No\n",i++);
        a[0]='\0',b[0]='\0';
    }
    return 0;
}

