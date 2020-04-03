#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int c=1;
        scanf("%d %d",&n,&m);
        if(n==1||m==1)
            c=m*n;
        else if(n==2&&m==2)
            c=4;
        else if(n==2&&m==3||n==3&&m==2)
            c=4;
        else if(n==2||m==2){
            if(m==2)
                c=n;
            else
                c=m;

            if(c%4==2)
                c+=2;
            if(c%4!=0)
                c++;
        }
        else
            c=(int)ceil((n*m)/2.0);
        printf("Case %d: %d\n",i+1,c);
    }
    return 0;
}
