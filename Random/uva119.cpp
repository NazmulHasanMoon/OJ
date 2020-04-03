#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,T=0;
    while(scanf("%d",&n)!=EOF)
    {
        char c[n+1][15],ch[15],cc[15];
        int x,y;
        getchar();
        map<string,int>mp;
        for(int i=0; i<n; i++)
        {
            scanf("%s",c[i]);
            //cout<<c[i]<<endl;
            mp[c[i]]=0,getchar();
        }
        //cout<<endl;
        for(int i=0; i<n; i++)
        {
            string st,cc;
            getline(cin,st);
            //cout<<st<<"\n\n";
            int p,x,y,d,r;
            p=x=y=0;
            for(int j=0,l=st.size(); j<l; j++)
            {
                int k,v;
                k=v=0;
                while(isalpha(st[j]))
                {
                    ch[k++]=st[j];
                    //cout<<st[j];
                    j++;
                    if(j==l)
                        break;
                }
                //cout<<endl<<k<<endl;
                if(isdigit(st[j+1]))
                {
                    j++;
                    while(isdigit(st[j]))
                    {
                        x=x*10+(st[j]-48);
                        j++;

                    }
                    if(isdigit(st[j+1]))
                    {
                        j++;
                        while(isdigit(st[j]))
                        {
                            y=y*10+(st[j]-48);
                            j++;
                        }
                        if(y!=0)
                        {
                            d=x/y;
                            r=y*d;
                        }
                        else
                            d=0,r=0;
                        //cout<<d<<endl;
                    }
                }
                //cout<<ch<<endl;
                while(v<k)
                {
                    cc+=ch[v];
                    v++;
                }
                if(p==0)
                {
                    mp[cc]-=r;
                    //cout<<cc<<endl;
                    p++;
                }
                else
                    mp[cc]+=d;
                cc.clear();

            }
        }
        if(T)
            cout<<endl;
        for(int i=0; i<n; i++)
            cout<<c[i]<<' '<<mp[c[i]]<<endl;
        //cout<<endl;
        T++;
    }
    return 0;
}
