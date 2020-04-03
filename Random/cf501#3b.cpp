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
int a[sz];
int main()
{
    faster
    int n,mx=1e4,cn(0);
    //cout<<mx<<endl;
    cin>>n;
    string s,t;
    cin>>s>>t;
    bool check;
    int l=0;
    for(int i=0,j=0,k=0; t[i]!='\0'; i++)
    {
        check=false;
        for(k=j; s[k]!='\0'; k++)
        {
            if(t[i]==s[k])
            {
                check=true;
                break;
            }
        }
        if(check==false)
        {
            cout<<"-1\n";
            return 0;
        }
        for(int w=k; w>j; w--)
            swap(s[w],s[w-1]),a[cn++]=w;
        if(cn>mx)
        {
            cout<<"-1\n";
            return 0;
        }
        j++;
    }
    cout<<cn<<'\n';
    for(int i=0; i<cn; i++)
        cout<<a[i]<<' ';
    return 0;
}

