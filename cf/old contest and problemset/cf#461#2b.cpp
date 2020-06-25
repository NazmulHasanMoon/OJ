#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s(0);
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            int k=(i^j);
            //cout<<k<<endl;
            if(k<(i+j)&&k<=n&&k>=j)
                s++;
        }
    }
    cout<<s<<endl;
    return 0;
}
