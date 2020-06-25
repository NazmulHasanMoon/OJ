#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 5
int A[sz];
int main()
{
    faster
    int x,y,z,p,a,b,c,n(4);
    for(int i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n);
    //cin>>x>>y>>z>>p;
    b=(A[0]-A[1]+A[2])/2;
    a=A[0]-b;
    c=A[2]-b;
    cout<<a<<' '<<b<<' '<<c<<endl;
    return 0;
}
