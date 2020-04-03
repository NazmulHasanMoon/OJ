#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int main()
{
    //faster
    int n,s;
    sf("%d",&n);
    if(n<=90)
        pf("0 No punishment\n");
    else if(n<=110)
        pf("%d Warning\n",(n-90)*300);
    else
        pf("%d License removed\n",(n-90)*500);
    return 0;
}

