#include<bits/stdc++.h>
#define     sf       scanf
#define     pf       printf
#define     ll       long long
#define     sz       100002
#define     pi       acos(-1.0)
#define     ff       first
#define     ss       second
#define     pb       push_back
#define     all(x)   x.begin(),x.end()
#define     pii      pair<int,int>
using namespace std;
vector<int>v;
map<int,int>mp;
int main()
{
    int n,a,b,c(0),x,y,z,p,q,r,mx,mn;
    mx=INT_MAX;
    mn=INT_MIN;
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9')
            c++;
    }
    cout<<c<<endl;
    return 0;
}
