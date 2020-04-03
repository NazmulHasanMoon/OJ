#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define ff first
#define sz 100005
int n,k;
int main()
{
    cin>>n>>k;
    while(k)
    {
        int x=n%10;
        while(k&&x==0)
            n/=10,x=n%10,k--;
        while(k&&x!=0)
            n--,x=n%10,k--;
    }
    cout<<n<<endl;
    return 0;
}
