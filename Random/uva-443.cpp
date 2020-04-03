#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int>v,v1,v2,v3;
    for(int i=0;i<31;i++)
        v.push_back(2<<i);
    for(int i=0;i<30;i++)
        v1.push_back(3<<i);
    for(int i=0;i<29;i++)
        v2.push_back(5<<i),v3.push_back(7<<i);
    for(int i=0;i<28;i++)
        v1.push_back(3*v1[i]);

    return 0;
}
