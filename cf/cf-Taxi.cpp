#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n,s,c,c2,c3,c4;
    cin>>n;
    c=c2=c3=c4=0;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        mp[s]++;
    }
    c+=mp[4];;
    c2+=mp[3];
    c3+=mp[2];
    c4+=mp[1];
    c+=c2;
    c4-=c2;
    if(c3%2==0)
        c+=c3/2;
    else
        c+=(1+c3/2),c4-=2;
    if(c4>0)
        c+=(c4%4)?1+c4/4:c4/4;
    cout<<c<<endl;
    return 0;
}
