#include<bits/stdc++.h>
using namespace std;
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<int>v,vv;
int main()
{
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='l')
            v.push_back(i+1);
        else
            vv.push_back(i+1);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(auto i:vv)
        cout<<i<<'\n';
    for(auto i:v)
        cout<<i<<'\n';
    return 0;
}
