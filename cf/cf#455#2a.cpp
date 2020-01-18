#include<bits/stdc++.h>
using namespace std;
#define     sf       scanf
#define     pf       printf
#define     ll       long long
#define     sz       100000001
#define     pi       acos(-1.0)
#define     ff       first
#define     ss       second
#define     pb       push_back
#define     all(x)   x.begin(),x.end()
map<char,int>mp;
int main()
{
    string s;
    getline(cin,s);

    for(int i=0;s[i]!='\0';i++){
        mp[s[i]]++;
        if(isalpha(s[i])&&mp[s[i]]<2)
            cout<<s[i];
        if(isspace(s[i]))
            mp.clear();
    }
    cout<<endl;
    return 0;
}
