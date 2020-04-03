#include<bits/stdc++.h>
using namespace std;
int dp[100];
bool isprime(int n,int fin,int i)
{
    if(i<2)return 0;
    if(i>fin)return 1;
    if(n%i==0)return 0;
    ///cout<<n%i<<endl;
    return isprime(n,fin,i+1);
}
int main()
{
    int x,n;
    while(cin>>n)
    {
        cout<<(isprime(n,sqrt(n),2)?"Prime":"Not")<<endl;
        ////cout<<isprime(n,sqrt(n),2)<<endl;
    }
    return 0;
}

