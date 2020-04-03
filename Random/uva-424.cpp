#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define sz 10002
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,st;
    for(int i=0;i<201;i++)
        st.push_back('0');
    int l,c,r,x,i,j,mn=202;
    c=0;
    while(cin>>s)
    {
        l=s.size();
        r=0;
        if(l==1&&s[0]=='0')
            break;
        for(i=200,j=l-1;i>=0&&j>=0;i--,j--)
        {
            r=st[i]-'0'+s[j]-'0'+c;
            x=r;
            if(r>9)
               x=r%10;
            st[i]=x+48;
            c=r/10;
        }
        if(c>0)
        {
            while(c!=0)
            {
                r=st[i]-'0'+(c%10);
                x=r;
                if(r>9)
                    x=r%10;
                st[i]=x+48;
                i--;
                c=c/10+r/10;
               // cout<<c<<' '<<i<<endl;;
            }
        }
        //cout<<i<<endl;
        mn=min(mn,i+1);
    }
    //cout<<endl;
    for(i=mn;i<201;i++)
        cout<<st[i];
    cout<<endl;
    return 0;
}
