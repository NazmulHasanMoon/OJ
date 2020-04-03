#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int x,l,i,j,k,m,n,w=0;
    bool t,z;
    while(cin>>s)
    {
        l=s.size();
        x=j=k=m=n=0;
        if(w)
            cout<<'\n';
        w=1;
        t=z=false;
        for(i=0;i<l;i++)
        {
            x=((x*10)+(s[i]-'0'))%4;
            j=((j*10)+(s[i]-'0'))%400;
            k=((k*10)+(s[i]-'0'))%100;
            m=((m*10)+(s[i]-'0'))%15;
            n=((n*10)+(s[i]-'0'))%55;
        }
        if(j%400==0||(k%100!=0&&x%4==0))
            cout<<"This is leap year.\n",t=z=1;
        if(m%15==0)
            cout<<"This is huluculu festival year.\n",t=1;;
        if(n%55==0&&z)
            cout<<"This is bulukulu festival year.\n",t=1;
        if(!t)
            cout<<"This is an ordinary year.\n";
    }
    return 0;
}
