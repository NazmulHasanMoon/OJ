#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf scanf
#define pf printf
int main()
{
    int a[3],k;
    cin>>a[0]>>a[1]>>a[2]>>k;
    sort(a,a+3);

    int x = a[2];
    int ans = x;
    while(k--){
        ans *= 2;
    }
    cout<<ans+a[0]+a[1]<<endl;

    //main();
}
