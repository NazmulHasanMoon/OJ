#include<bits/stdc++.h>
#include<cstring>
#define sz 3
using namespace std;
int x[sz][sz],y[sz][sz];
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            scanf("%d",&x[i][j]);
            y[i][j]=x[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(x[i][j]%2!=0)
            {
                if(j!=2)
                    y[i][j+1]++;
                if(j!=0)
                    y[i][j-1]++;
                if(i!=2)
                    y[i+1][j]++;
                if(i!=0)
                    y[i-1][j]++;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(y[i][j]%2!=0)
                cout<<"0";
            else
                cout<<"1";
            //cout<<y[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
