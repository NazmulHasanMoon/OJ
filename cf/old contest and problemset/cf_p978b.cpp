#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
int main()
{
    faster
    int n,re(0),r;
    string s;
    cin>>n>>s;

    for(int i=0;i<n;i++)
    {
        r=0;
        if(s[i]=='x')
        {
            i++;
            r++;
            while(s[i]=='x'&&i<n)
            {
                i++;
                r++;
            }
            if(r>=3)
                re+=(r-2);
        }
    }
    cout<<re<<endl;
    return 0;
}
