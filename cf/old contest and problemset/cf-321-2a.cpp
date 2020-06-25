#include<bits/stdc++.h>
using namespace std;
#define sz 1000000
int a[sz];
int main()
{
    int n,x(-1),c(1);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1])
            c++;
        else
            x=max(x,c),c=1;
    }
    x=max(x,c);
    cout<<x<<endl;
    return 0;
}
