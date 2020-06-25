#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
#define sz 20
char c[sz],ch[sz];
int main()
{
    long long x,y,p(0),q(0);
    cin>>x>>y;
    if(x==y)
        cout<<"1\n";
    else
    {
        p=x%10;
        q=y%10;
        if(p>q||(y-x)>=5)
            pf("0\n");
        else if(p==q&&p==0)
            cout<<"0\n";
        else
        {
            long long i,s=p+1;
            for(i=p+2; i<=q; i++)
                s=(s*i);
            cout<<(s%10)<<endl;
        }
    }
    return 0;
}
