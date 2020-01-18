#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define sz 1004
#define ss 26
char c[sz];
int x[sz],y[ss];
int main()
{
    int k,m=-1;
    long long s(0);
    scanf("%s",c);
    int l;
    l=strlen(c);
    scanf("%d",&k);
    for(int i=0;i<26;i++){
        scanf("%d",&y[i]);
        if(m<y[i])
            m=y[i];
    }
    int i;
    for(i=0;i<l;i++)
    {
        x[i]=int(c[i]-'a');
        //cout<<x[i]<<endl;
        for(int j=0;j<26;j++)
        {
            if(x[i]==j){
                s+=((i+1)*y[j]);
                //cout<<i+1<<" "<<y[j]<<" "<<s<<endl;
            }
        }
    }
    for(int j=i+1;j<=(i+k);j++){
        s+=j*m;
       /// cout<<s<<" "<<j<<" "<<m<<endl;
    }
    cout<<s<<endl;
    return 0;
}
