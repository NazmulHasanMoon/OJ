#include<bits/stdc++.h>
using namespace std;
#define sz 100002
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a,b,c,d,e;
    cin>>a>>b>>c;
    if(a<b)
    {
        while(a<b&&c)
            a++,c--;
        while(c>=2)
        {
            a++;
            b++;
            c-=2;
        }
    }
    else
    {
        while(b<a&&c)
            b++,c--;
        while(c>=2)
        {
            a++;
            b++;
            c-=2;
        }
    }
    if(c>=0){
        //cout<<(a+b)<<"\n";
        if(a!=b)
            cout<<min(a,b)*2<<'\n';
        else
            cout<<a+b<<'\n';
    }
    else
        cout<<"0\n";
    return 0;
}
