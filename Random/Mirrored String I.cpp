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
bool isval(string s)
{
    int l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='A'|| s[i]=='H'||s[i]=='I'||s[i]=='M'||s[i]=='O'||s[i]=='T'||s[i]=='U'||s[i]=='V'||s[i]=='W'||s[i]=='X'||s[i]=='Y');
        else return false;

    }

    return true;

}

bool ispal(string s)
{
    string a="";
    int l=s.size();
    for(int i=l-1;i>=0;i--)
    {
        a+=s[i];
    }
    if(s==a) return true;
    else return false;

}


int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(isval(s))
        {
            if(ispal(s))
            {
                cout<<"yes\n";
            }
            else cout<<"no\n";

        }
        else cout<<"no\n";

    }
    return 0;
}



