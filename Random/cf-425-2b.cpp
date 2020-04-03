#include<bits/stdc++.h>
using namespace std;
#define sz 100005
#define ss 28
char cc[ss];
int main()
{

    char c[sz];
    int n;
    map<char,char>mp;
    cin>>cc>>c>>n;
    for(int i=0,l=strlen(cc); i<l; i++)
        mp[cc[i]]=cc[i];

    for(int i=0; i<n; i++)
    {
        int L=strlen(c);
        char ch[sz];
        cin>>ch;
        int l,x,j,k;
        x=1;
        l=strlen(ch);

        for(j=k=0; j<L&&k<l; j++,k++)
        {
            if(ch[k]!=c[j]||!isalpha(c[j]))
            {
                if(c[j]=='*')
                {
                    while(!mp[ch[k]]&&k<l&&ch[k]!=c[j+1])
                        k++;
                    k--;
                   // cout<<k<<j;
                }
                if((!mp[ch[k]]&&c[j]=='?')||(c[j]=='*'&&mp[ch[k]])||(c[j]!='?'&&mp[ch[k]]&&c[j])||(mp[c[j]]&&mp[ch[k]])||(isalpha(c[j])&&!mp[c[j]]))
                {
                    cout<<"NO\n";
                    x=0;
                    break;
                }

            }
        }
        if(x&&(j<L-1)||(c[j]=='?'&&j<L&&k==l))
                cout<<"NO\n";
        else if(x)
        {
            if(c[L-1]=='*'&&k<l)
            {
                for(; k<l; k++)
                {
                    if(mp[ch[k]])
                    {
                        cout<<"NO\n";
                        x=0;
                        break;
                    }
                }
            }
            if(j==L&&k<l&&x)
                cout<<"NO\n";
            else if(x)
                cout<<"YES\n";
        }

    }

    return 0;
}
