#include<bits/stdc++.h>
using namespace std;
void findmax(int i,int *y,int *fm,int *sm)
{
    if(i==0)
    {
        *fm=y[i];
        return;
    }
    findmax(i-1,y,fm,sm);
    if(*fm<y[i])
        *sm=*fm,*fm=y[i];
}
int main()
{
    int x,y[100];
    cin>>x;
    for(int i=0; i<x; i++)
        cin>>y[i];
    int fm,sm;
    fm=sm=y[0];
    findmax(x-1,y,&fm,&sm);
    cout<<sm<<' '<<fm<<endl;
    return 0;
}

