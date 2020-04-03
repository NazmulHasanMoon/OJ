#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,y,r[5],i;
    scanf("%d",&n);
    bool x;
    x=1;
    while(x)
    {
        n++;
        y=n;
        i=0;
        while(y!=0)
        {
           r[i]=y%10;
           i++;
           y/=10;
        }
        if(r[0]!=r[1]&&r[0]!=r[2]&&r[0]!=r[3]&&r[1]!=r[2]&&r[1]!=r[3]&&r[2]!=r[3])
            x=0;
    }
    cout<<n<<endl;
    return 0;
}
