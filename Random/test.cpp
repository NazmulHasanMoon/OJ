#include<bits/stdc++.h>
using namespace std;
unordered_set<int>s;
int main()
{
    set<int>s;
    s.insert(1);
    s.insert(4);
    s.insert(5);
    s.insert(8);
    s.insert(9);
    s.insert(11);
    s.insert(15);
    cout<<*s.upper_bound(16)<<'\n';
    auto it=s.rbegin();
    cout<<*it<<endl;
    cout<<char('a'+2)<<endl;
    return 0;
}
