#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i(1);
    scanf("%d",&t);
    while(i<=t)
    {
        int x;
        scanf("%d",&x);
        long long s;
        s=(long long)pow(2.0,x);
        //cout<<s<<endl;
        while(s>=10){
            s/=10;
        }
        if(x%2==0)
            printf("+%lld\n",s);
        else
            printf("-%lld\n",s);
        i++;
    }
    return 0;
}
