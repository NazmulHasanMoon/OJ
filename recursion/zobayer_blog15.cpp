#include<bits/stdc++.h>
using namespace std;
int rev(int x,int i)
{
    if(x==0)return i;
    i=i*10+x%10;
    return rev(x/10,i);
}
int main()
{
    int q,n,x,arr[1000];
    cin>>n;
    cout<<rev(n,0)<<endl;
    return 0;
}


