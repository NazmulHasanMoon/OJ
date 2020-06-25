#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n,a,b,c,d;
    cin>>t;
    string s,ans;
    while(t--)
    {
        cin>>n>>a;
        cin>>s;
        b=0;
        int j,k;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                j=i-a;
                k=i-1;
                while(k>=0&&k>=j)
                    s[k--]='1';
                k=i+1;
                j=i+a;
                while(k<n&&k<=j)
                    s[k++]='1';
                i=j;
            }
        }
        for(int i=0;i<n;i++)
            if(s[i]=='0')i+=a,b++;
        cout<<b<<'\n';
    }
    return 0;
}



