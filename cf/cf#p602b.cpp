#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 100002
#define ll long long
int a[sz];
deque<int>de;
int main()
{
    faster
    int mx,mn,n,l(0),re(0),x,y,z;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    l=1;
    de.push_back(a[0]);
    mn=mx=a[0];
    x=y=z=0;
    for(int i=1; i<n; i++)
    {
        if(mn==mx)
        {
            if(a[i]>=mx)
                mx=a[i],x=i;
            else if(a[i]<=mx)
                mn=a[i],y=i;
            if(mx-mn<=1)
                de.push_back(a[i]),l++;
            else
            {
                while(!de.empty())
                    de.pop_back(),z++;
                de.push_back(a[i]);
                mx=mn=a[i];
                x=y=i;
                re=max(re,l),l=1;
            }
        }
        else
        {
            if(a[i]>mx)
            {

                re=max(re,l);
                while(!de.empty()&&z<=y)
                    de.pop_front(),z++,l--;
                de.push_back(a[i]);
                l++;
                mn=mx;
                y=x;
                x=i;
                mx=a[i];
            }
            else if(a[i]<mn)
            {
                re=max(re,l);
                if(y<x||a[i]-mn>1)
                {
                    while(!de.empty())
                        de.pop_front(),z++;
                    de.push_back(a[i]);
                    l=1;
                    x=y=i;
                    mn=mx=a[i];
                }
                else
                {
                    while(!de.empty()&&z<=x)
                        de.pop_front(),z++,l--;
                    de.push_back(a[i]);
                    l++;
                    x=y;
                    y=i;
                    mx=mn;
                    mn=a[i];
                }

            }
            else if(a[i]==mn)
            {
                de.push_back(a[i]);
                l++;
                y=i;
            }
            else
                de.push_back(a[i]),l++,x=i;

        }
    }
    cout<<max(re,l)<<'\n';
    return 0;
}
