#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
char c[5003],ch[5003];
set<int>s1,s2;
int main()
{
    faster
    int n,x,y,p,q;
    cin>>n;
    x=y=p=q=0;
    vector<int>v[3];

    for(int i=0; i<n; i++)
        cin>>c[i];
    ///cout<<c<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>ch[i];
        //cout<<ch[i]<<'-'<<c[i]<<endl;
        if(ch[i]=='1'&&c[i]=='1')
            v[1].push_back(i+1),p++;
        if(ch[i]=='1'&&c[i]=='0')
            y++,s2.insert(i+1);
        if(c[i]=='1'&&ch[i]=='0')
            x++,s1.insert(i+1);
        if(ch[i]=='0'&&c[i]=='0')
            q++,v[0].push_back(i+1);

    }
    // cout<<x<<' '<<y<<endl;
    if(x+p+q<y)
    {
        cout<<"-1\n";
        return 0;
    }
    if(x==y&&y==n/2)
    {
        for(auto i:s1)
            cout<<i<<' ';
    }
    else
    {
        int A,B;
        A=B=0;
        for(auto i:s2)
        {
            if(x<y)
                s1.insert(i),x++,y--,A++;
            else
                break;
        }
        for(auto i:s1)
        {
            if(x>y)
                s1.erase(i),y++,x--,B++;
            else
                break;
        }
        if(x<y&&x+q>=y)
        {
            int k(0);
            for(auto i:v[0])
            {
                if(!A)
                    break;
                s1.insert(i),x++,q--,A--;
                v[0].erase(v[0].begin()+k,v[0].begin()+k+1);
                k++;
            }
        }
        else if(y<x&&y+q>=x)
        {
            int k=0;
            for(auto i:v[0])
            {
                if(!B)
                    break;
                v[0].erase(v[0].begin()+k,v[0].begin()+k+1);
                k++;
                y++,q--,B--;

            }

        }
        if(x<n/2)
        {
            for(auto i:v[1])
            {
                if(x==n/2)
                    break;
                s1.insert(i),x++;
            }
        }
        if(x<n/2)
        {
            for(auto i:v[0])
                {
                    if(x==n/2)
                        break;
                    s1.insert(i),x++;
            }
        }

        if(x==n/2)
        {
            for(auto i:s1)
                cout<<i<<' ';
        }
        else
            cout<<"-1\n";


    }
    return 0;
}
