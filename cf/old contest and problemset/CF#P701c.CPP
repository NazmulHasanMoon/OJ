#include<bits/stdc++.h>
using namespace std;
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 100002
char c[sz];
map<char,int>mp;
set<char>st;
int main()
{
    faster
    int n,s(0),l1,l2;
    cin>>n;
    l1=l2=0;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        st.insert(c[i]);
    }
    for(auto i:st)
        l1++;
    deque<char>de;
    int y(0),mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mp[c[i]]++;
        if(l2<l1)
            l2=mp.size();
        de.push_back(c[i]);
        s++;
        //cout<<s<<endl;
        if(l2==l1)
        {
            //cout<<s<<endl;
            mn=min(mn,s);
            //cout<<mn<<' '<<i<<endl;
            while(1)
            {
                char cc=de.front();
                de.pop_front();
                s--;
                mp[cc]--;
                if(mp[cc]>0){
                    mn=min(mn,s);
                    //cout<<s<<'-'<<cc<<endl;
                }
                else
                {
                    s++;
                    ///cout<<s<<'!'<<cc<<endl;
                    mp[cc]++;
                    de.push_front(cc);
                    break;
                }
            }
        }
    }
    cout<<min(mn,s)<<'\n';
    return 0;
}
