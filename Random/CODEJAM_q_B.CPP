#include<bits/stdc++.h>
using namespace std;
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
///#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ff first
#define ss second
#define sf scanf
#define pf printf
int main()
{
    int n,cs(1),x;
     cin>>n;
     while(cs<=n)
     {
          string s,re;
          cin>>x>>s;
          for(int i=0;s[i]!='\0';i++)
          {
              if(s[i]=='E')
                re.push_back('S');
              else
                re.push_back('E');
          }
          cout<<"Case #"<<cs++<<": "<<re<<'\n';
     }
    return 0;
}
