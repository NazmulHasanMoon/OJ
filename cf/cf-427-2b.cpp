#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string n;
    cin>>k>>n;
    string:: iterator it=n.begin();
    for(;it!=n.end();it++)
    {
        cout<<*it;
    }
    return 0;
}
