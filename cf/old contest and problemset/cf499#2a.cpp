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
    faster
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    sort(all(s));
    k--;
    int sum=s[0]-'a'+1;
    int x,y;
    x=sum;
    for(int i=1;i<n&&k;i++)
    {
        int y=s[i]-'a'+1;
        if(y-x>1)
        {
            sum+=y;
            k--;
            x=y;
        }
    }
    if(k)
        cout<<"-1\n";
    else
        cout<<sum<<'\n';
    return 0;
}

