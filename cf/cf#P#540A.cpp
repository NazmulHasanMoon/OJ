#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c(0);
    string s,ss;
    cin>>n>>s>>ss;
    int l=s.size();
    for(int i=0;i<l;i++)
    {
        int y,z,x,p,q;
        y=int(s[i]-48);
        z=int(ss[i]-48);
        x=abs(y-z);
        p=9-max(y,z);
        q=min(y,z)-0;
        c+=min(x,p+q+1);
    }
    cout<<c<<endl;
    return 0;
}
