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
#define sz 1000000
int main()
{
    faster
    string s,ss;
    cin>>s>>ss;
    int l=s.size();
    int i;
    cout<<s[0];
    for(i=1;i<l;i++)
    {
        if(s[i]-'a'>=ss[0]-'a')
            break;
        cout<<s[i];
    }
    cout<<ss[0]<<endl;
    return 0;
}
