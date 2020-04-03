#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
typedef long long ll;
int main()
{

    while(1)
    {
        ll n,s;
        sf("%lld",&n);
        if(!n)
            break;
        if(n&1){
            n=n/2+1;
            s=(n*(2*n-1)*(2*n+1))/3;
        }
        else{
            n=n/2+1;;
            s=(n*(2*n-2)*(2*n-1))/3;
        }
        pf("%lld\n",s);
    }
    return 0;
}

