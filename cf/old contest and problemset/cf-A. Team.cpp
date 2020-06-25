#include<bits/stdc++.h>
#define sz 1001
using namespace std;
char c[sz][5];
int main()
{
    int n,s,S(0);
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        s=0;
        for(int j=0;j<3;j++){
            cin>>c[i][j];
            if(c[i][j]=='1')
                s++;
        }
        if(s>=2)
            S++;
    }
    cout<<S<<endl;
    return 0;
}
