#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 200002
#define ll long long
ll a[sz];
char s[sz];
deque<pair<ll,int>>de;
int main()
{
    faster
    int n,k,x,y;
    ll re(0),mx(0);

    cin>>n>>k;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int i=0; i<n; i++)
    {
        if(de.empty())
            de.push_back({a[i],i}),x=1,re+=a[i];///cout<<re<<' '<<a[i]<<endl;
        else if(s[de.front().ss]!=s[i])
        {
            while(!de.empty()&&s[de.front().ss]!=s[i])
                de.pop_front();
            de.push_back({a[i],i});
            re+=a[i];
            x=1;
        }
        else
        {
            if(s[de.front().ss]==s[i]&&x<k)
                re+=a[i],de.push_back({a[i],i}),x++;
            else
            {
                while(s[de.front().ss]==s[i]&&i<n)
                {
                    de.push_back({a[i],i});
                    re+=a[i];
                    i++;
                    x++;
                }
               /// cout<<x<<' '<<re<<endl;
                sort(de.begin(),de.end());
                while(x>k)
                {
                    y=de.front().ff;
                    re-=y;
                    //cout<<de.front().ff<<'-'<<de.front().ss<<endl;
                    de.pop_front();
                    x--;
                }
                ///cout<<x<<'-'<<re<<endl;
                i--;

            }
        }
    }
    cout<<re<<'\n';
    return 0;
}
