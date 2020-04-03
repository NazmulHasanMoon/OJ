#include<bits/stdc++.h>
using namespace std;
int LCM(int x,int y,int M)
{
    if((x*M)%y==0)return x*M;
    return LCM(x,y,M+1);
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<LCM(x,y,1)<<endl;
    return 0;
}
