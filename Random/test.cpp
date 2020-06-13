#include<bits/stdc++.h>
using namespace std;
unordered_set<int>s;
int main()
{
    cout<<(1<<3)<<endl;
    int x,y;
    x=8;
    y=0;
    while(x)
    {
        x>>=1;
        y++;
    }
    cout<<y<<' '<<(1<<y)<<endl;
    /*set<int>s;
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
    cout<<char('a'+2)<<endl;*/
    return 0;
}
