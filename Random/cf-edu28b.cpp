#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t;
    long long m,x,y,z;
    x=y=z=0;
    vector<int>v;
    cin>>n>>k>>m;
    for(int i=0; i<k; i++)
    {
        cin>>t;
        v.push_back(t);
        x+=t;
    }

    sort(v.begin(),v.end());
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        if(((*it)*n)+y>=m)
            y+=(*it)*n;
        else
            break;
    }
    if(y<m)
    {
        int l=n-1;
        for(; l>0; l--)
        {
            if(((*it)*l)+y<=m)
            {
                y+=((*it)*l);
                break;
            }
        }
    }
    if(x<m)
    {
        z+=(n+1);
        for(int i=n; i>1; i--)
        {
            if(x*i<=m)
            {
                x*=i;
                z*=i;
                break;
            }
        }
        if(x<m)
        {
            for(it=v.begin(); it!=v.end(); it++)
            {
                if(((*it)*(n-1))+x>=m)
                    x+=(*it)*(n-1),z+=((*it)*(n-1));
                else
                    break;
            }
            if(x<m)
            {
                int l=n-2;
                for(; l>0; l--)
                {
                    if(((*it)*l)+x<=m)
                    {
                        x+=((*it)*l),z+=(((*it)*l));
                        break;
                    }
                }
            }
        }
    }
    cout<<max(y,z)<<endl;
    return 0;
}
