#include<bits/stdc++.h>
using namespace std;
long long modpod(long long b, long long p, long long m){
	long long r=1;
	long long pow = b%m;
	while (p > 0) {
        if (p % 2 == 1)
            r = (r*pow)%m;
        pow = (pow*pow)%m;
        p >>= 1;
    }
    return r;
}
int main()
{
    ///m must be a prime number
    long long n,m;
    cin>>n>>m;
    cout<<(7*modpod(n,m-2,m))%m<<endl;
    return 0;
}
