#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int n,j(0);
    scanf("%d",&n);
    char c[5]="abcd";
    for(int i=0;i<n;i++)
    {
        printf("%c",c[j]);
        j++;
        if(j==4)
            j=0;
    }
    cout<<endl;
    return 0;
}
