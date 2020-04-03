#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,x,y;
    scanf("%d %d",&n,&k);
    map<int,int>mp;
    for(int i=1;i<=n;i++)
        mp[i]=i;
    x=n;
    for(int i=0;i<k;i++){
        scanf("%d",&a);
        if(!i){
            y=(a+1)%x;
            if(!y)
                y=x;
            printf("%d ",y);
            mp[y]=0;
            if(y!=x)
                y++;
            else
                y=1;
            x--;
        }
        else
        {
            int z,r,j;
            z=a%x;
            r=1;
            for(j=y+1;j<=n&&r<=z;j++){
                if(mp[j])
                    r++;
            }
            if(r<=z)
            {
                for(j=1;j<=n&&r<=z;j++)
                {
                    if(mp[j])
                        r++;
                }
            }
            cout<<mp[j-1];
            if(i<=k-1)
                printf(" ");
            else
                printf("\n");
            mp[j-1]=0;
            bool t(1);
            for(;j<=n;j++){
                if(mp[j]){
                    t=0;
                    break;
                }
            }
            if(t)
            {
                for(j=1;j<=n;j++){
                    if(mp[j])
                    {
                        t=0;
                        break;
                    }
                }
            }
            y=j;
            x--;
        }
    }
    return 0;
}
