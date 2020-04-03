#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[4],s(0);
    for(int i=0;i<4;i++)
        scanf("%d",&x[i]);
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(x[i]==x[j])
            {
                s++;
                break;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
