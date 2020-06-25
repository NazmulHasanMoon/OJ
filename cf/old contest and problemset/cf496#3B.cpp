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
    string s1,s2;
    int l1,l2,s(0);
    cin>>s1>>s2;
    l1=s1.size();
    l2=s2.size();
    s=l1+l2;
    int i=l1-1,j=l2-1;
    for(;i>=0&&j>=0;i--,j--)
    {
        if(s1[i]==s2[j])
            s-=2;
        else
            break;
    }
    cout<<s<<'\n';
    return 0;
}

