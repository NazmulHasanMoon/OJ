#include<bits/stdc++.h>
using namespace std;
long long a,b,c,s;
int main()
{
    cin>>a>>b>>c;
    cout<<min(min(a+b+c,a+a+b+b),min(b+b+c+c,a+a+c+c))<<endl;
    return 0;
}
