#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 10005
#define ll long long
int main()
{
    int n,c(1);
    cin>>n;
    int l=sqrt(n*1.0)+1;
    for(int i=2;i<l;i++)
    {
        if(n%i==0)
        {
            if(i*i!=n)
                c+=2;
            else
                c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
