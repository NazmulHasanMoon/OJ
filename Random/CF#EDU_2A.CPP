#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a&&d&&a==d)||(!a&&!c&&!d))
        cout<<"1\n";
    else
        cout<<"0\n";

    return 0;
}
