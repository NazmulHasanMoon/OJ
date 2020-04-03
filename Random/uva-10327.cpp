#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
            int a[n],cnt(0);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]<a[j])
                    cnt++;
            }
        }
        printf("Minimum exchange operations : %d\n",cnt);
    }
    return 0;
}
