#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m(-3200),x,y,n,S(0);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        S+=y-x;
        if(m<S)
            m=S;
    }
    cout<<m<<endl;
    return 0;
}
