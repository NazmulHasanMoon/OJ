#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d ",n);
    for(int i=2;n!=1;i++)
    {
        if(n%i==0){
            while(n%i==0)
            {
                n=n/i;
                printf("%d ",n);
            }
        }
    }
    cout<<endl;
    return 0;
}
