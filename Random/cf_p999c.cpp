#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
#define rn PI/180
#define sf scanf
#define pf printf
#define nl printf("\n")
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    int n,k;
    string s;
    cin>>n>>k>>s;
    for(int i=0; i<26; i++)
    {
        if(k)
        {
            for(int j=0; j<n&&k&&j>=0; j++)
            {
                //cout<<s[j]<<' '<<i<<'!';
                if(s[j]-'a'==i)
                {
                    s.erase(s.begin()+j,s.begin()+j+1);
                    k--;
                    j--;
                }
            }
        }
    }
    cout<<s<<endl;
    return 0;

}
