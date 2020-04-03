 #include<bits/stdc++.h>
 #include<cstring>
 #include<cctype>
using namespace std;
#define sf scanf
#define pf printf
#define sz 10000
typedef long long ll;
int main()
{
    int t,o,i(1);
    sf("%d",&t);
    while(i<=t)
    {
        sf("%d",&o);
        int p[sz],c[sz],mx=1;
        getchar();
        char s[sz];
        gets(s);
       // puts(s);
        int A=strlen(s);
        int k,l,m,w;
        l=m=w=0;
        for(int j=0;j<A; j++)
        {
            char ss[5];
            if(isdigit(s[j]))
            {
                //cout<<s[j]<<endl;
                int x(0);
                if(s[j-1]=='^')
                {
                    k=2;
                    if(l==0||l<m)
                        c[l++]=1;
                    //cout<<s[j]<<'*';
                }
                else
                {
                    k=1;
                    if(l>m)
                        p[m++]=1,mx=max(mx,p[m-1]);
                }
                while(isdigit(s[j])&&j<A)
                {
                    ss[x++]=s[j];
                    j++;
                }
                ss[x]='\0';
                if(k==1)
                    c[l++]=atoi(ss);
                else
                    p[m++]=atoi(ss),mx=max(mx,p[m-1]);
                //cout<<c[l-1]<<"***"<<p[m-1]<<' '<<l<<' '<<m<<' '<<j<<endl;
            }

        }
       // cout<<p[m-1]<<' '<<c[l-1]<<endl;
        //cout<<l<<"**"<<m<<endl;
        //cout<<p[l];
        if(l>m)
            p[m++]=1;
        else if(m>l)
            c[l++]=1;
        //cout<<c[1]<<' '<<p[1]<<endl;
        if(mx<o)
            pf("Case %d: 0\n",i);
        else
        {
            pf("Case %d: ",i);
            int z=0;
            bool t=0;//  cout<<l<<'*'<<m<<endl;
            while(z<m)
            {

                //cout<<p[z]<<'*';
                if(p[z]>=o)
                {
                    if(z>0&&t)
                        pf("+ ");
                    ll xx=c[z];
                    int u=1;
                    // cout<<p[z]<<'*';
                    while(u<=o)
                    {
                        xx*=p[z];
                        p[z]--;
                        u++;
                    }
                    //cout<<p[z]<<"***";
                    if(p[z]>1&&xx>1)
                    {
                        pf("%d*X^",xx);
                        pf("%d ",p[z]);
                    }
                    else if(xx==1&&p[z]>1)
                        pf("X^%d ",p[z]);
                    else if(p[z]==1)
                        pf("%d*X ",xx);
                    else
                        pf("%d ",xx);
                    t=1;
                }
                z++;
            }
            pf("\n");
        }
        i++;
    }
    return 0;
}
