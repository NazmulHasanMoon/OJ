#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 100
typedef long long ll;
int rem[sz];
int main()
{
    int a,b,c,j(0),k(1);
    bool t=false;
    sf("%d %d %d",&a,&b,&c);
    double z,x=(a+0.0)/b;
    ll y=(ll)x;
    z=(x-y)*10000000000000;
    ll n=(ll)z;
   // cout<<n<<endl;
    while(n!=0)
    {
        rem[j++]=n%10;
        n/=10;
    }
    if(rem[0]==c)
        t=true;
    for(int i=j-1; i>=0; i--,k++)
    {
        if(rem[i]==c)
        {
            t=true;
            break;
        }
    }
    if(t==true)
        pf("%d\n",k);
    else
        pf("-1\n");
    return 0;
}
