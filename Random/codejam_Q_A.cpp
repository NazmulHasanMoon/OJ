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
    int T,cs(1);
    cin>>T;
    while(cs<=T)
    {
        string s,a,b;
        bool ck=false;
        cin>>s;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='4')
                ck=true,a.push_back('2'),b.push_back('2');
            else{
                if(!ck)
                    a.push_back(s[i]);
                else
                    b.push_back(s[i]),a.push_back('0');
            }
        }
        cout<<"Case #"<<cs++<<": "<<a<<' '<<b<<'\n';
    }
    return 0;
}
