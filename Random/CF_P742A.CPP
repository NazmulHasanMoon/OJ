#include<bits/stdc++.h>
using namespace std;
#define loopn(a,b,c)  for(int a=b;a>c;a--)
#define loop(a,b,c)   for(int a=b;a<c;a++)
#define loopa(p,v)    for(auto p:(v))
#define lloop(a,b,c)  for(long long a=b;a<c;a++)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int main()
{
    faster
    int n;
    cin>>n;
    if(n==0)
        cout<<"1\n";
    else if(n%4==0)
        cout<<"6\n";
    else if(n%4==3)
        cout<<"2\n";
    else if(n%4==2)
        cout<<"4\n";
    else
        cout<<"8\n";
    return 0;
}
