#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    long int n,i;
    long long L=0,R=0,S,s;
    cin>>n;
    int a[n],b[n],r=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        L+=a[i];
        R+=b[i];
    }
    S=abs(L-R);
    //cout<<"S ="<<S<<endl;
    for(i=0;i<n;i++)
    {
        s=abs((b[i]-a[i])+(b[i]-a[i]));
        if(s>S)
        {
            r=1;
            cout<<i+1<<endl;
            break;
        }
    }
    if(!r)
        cout<<r<<endl;
    return 0;
}
