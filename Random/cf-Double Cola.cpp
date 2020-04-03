#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,s(0);
    char ch[6][10]={"Howard","Rajesh","Penny","Leonard","Sheldon"};
    cin>>n;
    i=5;
    while(s<n){
        s+=i;
        if(s<n)
            i=i*2;
        //cout<<i<<' '<<s<<endl;
    }
    s-=i;
    //cout<<s<<endl;
    i=i/5;
    for(j=5;j>=1&&s<n;j--){
        s+=i;
        //cout<<j<<' '<<s<<' '<<i<<endl;
    }
    cout<<ch[j]<<endl;
    return 0;
}
