#include<bits/stdc++.h>
using namespace std;
#define loopn(a,b,c)  for(int a=b;a>c;a--)
#define loop(a,b,c)   for(int a=b;a<c;a++)
#define loopa(p,v)    for(auto p:(v))
#define lloop(a,b,c)  for(long long a=b;a<c;a++)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define sz 201
int a[sz],b[sz];
vector<int>v;
unordered_map<int,bool>m;
bool check(int x)
{
    loop(i,1,x)
    {
        if(v[i]<v[i-1])
            return false;
    }
    return true;
}
int main()
{
    faster
    int q,n;
    cin>>q;
    while(q--)
    {
        cin>>n;
        v.erase(v.begin(),v.end());
        bool ck=true;
        int x=0;
        loop(i,0,n)
        cin>>a[i];
        if(n==2||n==1)
            cout<<"YES\n";
        else
        {

            loop(i,1,n-1)
            {
                if(a[i]<a[i-1]&&a[i]<a[i+1])
                {
                    if(a[0]<a[n-1])
                    {
                        for(int j=i; j>=0; j--)
                            v.pb(a[j]);//cout<<a[j]<<' '<<j<<"!";
                        for(int j=n-1; j>i; j--)
                            v.pb(a[j]);
                    }//cout<<a[j]<<' '<<j<<"!";
                    else
                    {
                        for(int j=i; j<n; j++)
                            v.pb(a[j]);
                        for(int j=0; j<i; j++)
                            v.pb(a[j]);
                    }
                    ck=check(n);
                    break;
                }
                else if(a[i]>a[i-1]&&a[i]>a[i+1])
                {
                    if(a[0]>a[n-1])
                    {
                        for(int j=i+1; j<n; j++)
                            v.pb(a[j]);//cout<<a[j]<<' '<<j<<"!!";
                        for(int j=0; j<=i; j++)
                            v.pb(a[j]);
                    }//cout<<a[j]<<' '<<j<<"!!";
                    else
                    {
                        for(int j=i-1; j>=0; j--)
                            v.pb(a[j]);
                        for(int j=n-1; j>=i; j--)
                            v.pb(a[j]);
                    }
                    ck=check(n);
                    break;

                }
            }

            /// cout<<v.size()<<'-'<<ck<<endl;
            if(ck==true)
                cout<<"YES\n";
            else
                cout<<"NO\n";

        }
        ///v.clear();
    }
    return 0;
}
