#include<bits/stdc++.h>
#include<cstring>
#define sz 105
#define ss 26
using namespace std;
char c[sz],ch[sz],cc[sz];
int x[ss],y[ss];
int main()
{
    cin>>c>>ch>>cc;
    for(int j=0;j<strlen(c);j++)
        x[c[j]-'A']++;
    for(int i=0;i<strlen(ch);i++)
        x[ch[i]-'A']++;
    for(int i=0;i<strlen(cc);i++)
        y[cc[i]-'A']++;
    for(int i=0;i<26;i++)
    {
        //cout<<x[i]<<" "<<y[i]<<endl;
        if(x[i]!=y[i]){
            cout<<"NO\n";
            return 0;
        }

    }
    cout<<"YES"<<endl;
    return 0;
}
