#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    scanf("%d",&n);
    bool t=false;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a%2!=0)
            t=true;
    }
    if(t)
        printf("First\n");
    else
        printf("Second\n");
    return 0;
}
