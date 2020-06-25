#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long int k2,k3,k5,k6;
    long long s=0;
    cin>>k2>>k3>>k5>>k6;
    while(k2!=0&&k5!=0&&k6!=0)
    {
        s+=256;
        k2--,k5--,k6--;
    }
    while(k2!=0&&k3!=0)
    {
        s+=32;
        k2--,k3--;
    }
    cout<<s<<endl;
    return 0;
}
