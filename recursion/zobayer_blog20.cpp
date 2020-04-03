#include<bits/stdc++.h>
using namespace std;
void tower(int n,char s,char m,char d)
{
    if(n>0)
    {
        tower(n-1,s,d,m);
        cout<<s<<"->"<<d<<endl;
        tower(n-1,m,s,d);
    }
}
int main()
{
    int n;
    cin>>n;
    tower(n,'a','b','c');
    return 0;
}
