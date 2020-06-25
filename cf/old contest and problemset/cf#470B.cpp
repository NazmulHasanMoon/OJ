#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define sz 500005
int a[sz];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int x=n/2+1;
    vector<int>v;
    int l(1);
    v.push_back(2);
    for(int i=4; i<=x; i+=2)
        a[i]=1;
    for(int i=3; i<=x; i+=2)
    {
        if(!a[i])
        {
            v.push_back(i);
            l++;
            for(int j=i+i; j<=n; j+=i)
                a[j]=1;
        }
    }
    int y=n;
    if(n==4){
        cout<<"2\n";
        return 0;
    }
    while(y%v[0]==0)
        y/=v[0];
    if(y==1)
        cout<<n-1<<endl;
    cout<<v[1]*y<<endl;
    return 0;
}
