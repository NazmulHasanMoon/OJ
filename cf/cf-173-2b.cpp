#include<bits/stdc++.h>
using namespace std;
#define sz 1000001
char c[sz];
int main()
{
    int n,a,b,s1,s2;
    s1=s2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(s1+a-s2<=500)
            s1+=a,c[i]='A';
        else
            s2+=b,c[i]='G';
    }
    cout<<c<<endl;
    return 0;
}
