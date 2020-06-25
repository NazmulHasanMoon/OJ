#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s(0);
    for(int i=0;i<5;i++)
        cin>>n,s+=n;
    cout<<((s%5==0&&s!=0)?s/5:-1)<<endl;
    return 0;
}
