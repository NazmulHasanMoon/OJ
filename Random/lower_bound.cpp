#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>v;
    for(int i=1;i<10;i++)
        v.insert(i);
    set<int>::iterator it;
    it=v.lower_bound(8);
    cout<<*it<<endl;
    return 0;
}
