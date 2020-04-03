#include<bits/stdc++.h>
using namespace std;
int x;
int main()
{
    string c;
    vector<int>v;
    cin>>c;
    int s;
    s=c.size();
    if(s%2)
    {
        s++;
        int i;
        for(i=1; i<=s/2; i++)
            cout<<'4';
        for(; i<=s; i++)
            cout<<'7';
    }
    else
    {
        stringstream n(c);
        bool t(0);
        int f,sv,y,z;
        z=s;
        f=sv=0;
        while(n>>x)
        {
            z--;
            if(x==4||x==7)
                v.push_back(x);
            else
            {
                if(!t)
                    y=s-z-1;
                if(x<7)
                    v.push_back(7);
                else
                    v.push_back(4),t=1;
            }
            if(x==4)
                f++;
            else if(x==7)
                sv++;
        }
        vector<int>::iterator it=v.begin();
        if(t)
        {
            if(*it==7)
            {
                s+=2;
                int i;
                for(i=1; i<=s/2; i++)
                    cout<<'4';
                for(; i<=s; i++)
                    cout<<'7';
            }
            else
            {
                *it=7;
                for(;it!=v.end();it++){
                    if(*it==7)
                        *it=4;
                }
                it=v.size()-1;
                *it=7;
                for(auto i: v)
                    cout<<i;
            }
        }
        else if(f==sv)
            for(auto i: v)
                cout<<i;
        else
        {
            if()
            }
    }
    cout<<endl;
    return 0;
}
