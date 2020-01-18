#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 10005
#define ll long long
int a[102],b[102];
int main()
{
    int n,d,c(0),s(0),j(0),y;
    cin>>n>>d;
    set<int>st;
    for(int i=0;i<n;i++)
        cin>>y,st.insert(y);
    if(n==1)
    {
        cout<<"0\n";
        return 0;
    }
    n--;
    for(auto i:st)
    {
        a[j++]=i;
    }
    j--;
    for(int i=0;i<j;i++)
        b[i]=a[i+1]-a[i];
    sort(b,b+j);
    if(b[0]>d)
        c++,b[0]=d;
    for(int i=1;i<j;i++)
    {
        int x=b[i-1]+b[i];
       // cout<<b[i-1]<<' '<<b[i]<<' '<<x<<'\n';
        if(x>d)
        {
            c++;
            b[i]=d;
        }
        else
            b[i]=x;
    }
    cout<<c<<endl;
    return 0;
}
