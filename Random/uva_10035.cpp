#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    while(1)
    {
        string a,b;
        cin>>a>>b;
        if(a=="0"&&b=="0")
            break;
        int l,z;
        l=a.size(),z=b.size();
        int x=max(l,z),r(0),car(0);
        for(int i=x-1;i>=0;i--)
        {
            int w=int(a[--l]-'0')+int(b[--z]-'0');
            if(w>9||w+car>9)
                car=1,r++;
            else
                car=0;
            if(l==0)
                a[l]='0',l=1;
            if(z==0)
                b[z]='0',z=1;
                //cout<<w<<endl;
        }
        if(!r)
            cout<<"No carry operation.\n";
        else if(r>1)
            cout<<r<<" carry operations.\n";
        else
            cout<<r<<" carry operation.\n";
    }
    return 0;
}
