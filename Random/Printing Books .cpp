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
ll n;
ll digit(ll y)
{
    ll cnt=0;
    while(y>0)
    {
        y/=9;
        cnt++;
    }
    return cnt;
}
void re(ll page,ll cnt)
{
    if(n%cnt==0)
        cout<<page+(n/cnt)<<'\n';
    else
        cout<<"-1\n";
}
ll fd(ll y,ll cnt)
{
    ll z;
    z=9;
    ll w=cnt;
    w--;
    while(w!=0)
    {
        z=z*10+9;
        w--;
    }
    return z;
}
int main()
{
    faster
    ll t;
    cin>>t;
    ll x,y,z,page;
    ll dig,cnt;
    while(t--)
    {
        cin>>n>>x;
        page=0;
        bool ck=true;
        dig=digit(x);
        z=fd(x,dig);
        cnt=dig;
        if(cnt<16)
        {
            y=(z-x+1)*cnt;
            if(y>=n)
                re(page,cnt);
            else
            {
                page+=z-x+1;
                n-=y;
                y=z;
                z=z*10+9;
                cnt++;
                y=(z-y)*cnt;
                if(y>=n||cnt>=16)
                {
                    re(page,cnt);
                }
                else
                {
                    page+=(y/cnt);
                    n-=y;
                    y=z;
                    z=z*10+9;
                    cnt++;
                    y=(z-y)*cnt;
                    if(y>=n||cnt>=16)
                        re(page,cnt);
                    else
                    {
                        page+=(y/cnt);
                        n-=y;
                        y=z;
                        z=z*10+9;
                        cnt++;
                        y=(z-y)*cnt;
                        if(y>=n||cnt>=16)
                        {
                            ck=false;
                            re(page,cnt);
                        }
                        else if(ck)
                        {
                            page+=(y/cnt);
                            n-=y;
                            y=z;
                            z=z*10+9;
                            cnt++;
                            y=(z-y)*cnt;
                            if(y>=n||cnt>=16)
                                re(page,cnt);
                            else
                            {
                                page+=(y/cnt);
                                n-=y;
                                y=z;
                                z=z*10+9;
                                cnt++;
                                if(cnt>=16)
                                {
                                    ck=false;
                                    re(page,cnt);
                                }
                                y=(z-y)*cnt;
                                if(y>=n&&ck)
                                    re(page,cnt);
                                else if(ck)
                                {
                                    page+=(y/cnt);
                                    n-=y;
                                    y=z;
                                    z=z*10+9;
                                    cnt++;
                                    if(cnt>=16)
                                    {
                                        ck=false;
                                        re(page,cnt);
                                    }
                                    y=(z-y)*cnt;
                                    if(y>=n&&ck)
                                        re(page,cnt);
                                    else if(ck)
                                    {
                                        page+=(y/cnt);
                                        n-=y;
                                        y=z;
                                        z=z*10+9;
                                        cnt++;
                                        if(cnt>=16)
                                        {
                                            ck=false;
                                            re(page,cnt);
                                        }
                                        y=(z-y)*cnt;
                                        if(y>=n&&ck)
                                            re(page,cnt);
                                        else if(ck)
                                        {
                                            page+=(y/cnt);
                                            n-=y;
                                            y=z;
                                            z=z*10+9;
                                            cnt++;
                                            if(cnt>=16)
                                            {
                                                ck=false;
                                                re(page,cnt);
                                            }
                                            y=(z-y)*cnt;
                                            if(y>=n&&ck)
                                                re(page,cnt);
                                            else if(ck)
                                            {
                                                page+=(y/cnt);
                                                n-=y;
                                                y=z;
                                                z=z*10+9;
                                                cnt++;
                                                if(cnt>=16)
                                                {
                                                    ck=false;
                                                    re(page,cnt);
                                                }
                                                y=(z-y)*cnt;
                                                if(y>=n&&ck)
                                                    re(page,cnt);
                                                else if(ck)
                                                {
                                                    page+=(y/cnt);
                                                    n-=y;
                                                    y=z;
                                                    z=z*10+9;
                                                    cnt++;
                                                    y=(z-y)*cnt;
                                                    if(y>=n||cnt>=16)
                                                    {
                                                        ck=false;
                                                        re(page,cnt);
                                                    }
                                                    else
                                                    {
                                                        page+=(y/cnt);
                                                        n-=y;
                                                        y=z;
                                                        z=z*10+9;
                                                        cnt++;
                                                        y=(z-y)*cnt;
                                                        if(y>=n||cnt>=16)
                                                        {
                                                            ck=false;
                                                            re(page,cnt);
                                                        }
                                                        else
                                                        {
                                                            page+=(y/cnt);
                                                            n-=y;
                                                            y=z;
                                                            z=z*10+9;
                                                            cnt++;
                                                            y=(z-y)*cnt;
                                                            if(y>=n||cnt>=16)
                                                            {
                                                                ck=false;
                                                                re(page,cnt);
                                                            }
                                                            else
                                                            {
                                                                page+=(y/cnt);
                                                                n-=y;
                                                                y=z;
                                                                z=z*10+9;
                                                                cnt++;
                                                                y=(z-y)*cnt;
                                                                if(y>=n||cnt>=16){
                                                                    ck=false;
                                                                    re(page,cnt);
                                                                }
                                                                else
                                                                {
                                                                    page+=(y/cnt);
                                                                    n-=y;
                                                                    y=z;
                                                                    z=z*10+9;
                                                                    cnt++;
                                                                    y=(z-y)*cnt;
                                                                    if(y>=n||cnt>=16)
                                                                    {
                                                                        ck=false;
                                                                        re(page,cnt);
                                                                    }
                                                                    else
                                                                    {
                                                                        page+=(y/cnt);
                                                                        n-=y;
                                                                        y=z;
                                                                        z=z*10+9;
                                                                        cnt++;
                                                                        y=(z-y)*cnt;
                                                                        if(y>=n||cnt>=16)
                                                                        {
                                                                            ck=false;
                                                                            re(page,cnt);
                                                                        }
                                                                        else
                                                                        {
                                                                            page+=(y/cnt);
                                                                            n-=y;
                                                                            y=z;
                                                                            z=z*10+9;
                                                                            cnt++;
                                                                            y=(z-y)*cnt;
                                                                            if(y>=n||cnt>+16)
                                                                            {
                                                                                ck=false;
                                                                                re(page,cnt);
                                                                            }
                                                                            else
                                                                            {
                                                                                page+=(y/cnt);
                                                                                n-=y;
                                                                                y=z;
                                                                                z=z*10+9;
                                                                                cnt++;
                                                                                y=(z-y)*cnt;
                                                                                if(y>=n||cnt>=16)
                                                                                {
                                                                                    ck=false;
                                                                                    re(page,cnt);
                                                                                }

                                                                            }

                                                                        }

                                                                    }
                                                                }
                                                            }

                                                        }
                                                    }
                                                }
                                            }

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            if(n%cnt==0)
                cout<<page+(n/cnt)<<'\n';
            else
                cout<<"-1\n";
        }
    }
    return 0;
}

