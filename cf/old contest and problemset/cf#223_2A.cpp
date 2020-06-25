#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 1003
int a;
int main()
{
    faster
    int n,x,y,z;
    x=y=0;
    cin>>n;
    deque<int>de;
    for(int i=0;i<n;i++)
        cin>>a,de.push_back(a);
    //sort(a,a+n);
    int i=0;
    while(!de.empty())
    {
        if(de.front()>de.back())
            z=de.front(),de.pop_front();
        else
            z=de.back(),de.pop_back();
        if(i&1)
            y+=z;
        else
            x+=z;
        i++;
    }
    cout<<x<<' '<<y<<'\n';
    return 0;
}
