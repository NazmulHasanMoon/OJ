#include<bits/stdc++.h>
using namespace std;
int binarysearh()
{
    start=0;
    end=n-1;
    mid=(start+end)/2;
    while(start<=end)
    {
        if(x==A[mid])
        {
            printf("location = %d search value = %d\n",mid+1,x);
            break;
        }
        else if(x>A[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
}
int main()
{
    int x,y,z;
    while(scanf("%d",&x)){
        if(x==0)
            break;
        //vector<int>a[x];
        int a[x];
        for(int i=0;i<x;i++)
        {
            scanf("%d",&a[i]);
            //a[i].push_back(z);
        }
        scanf("%d",&y);
        //vector<int>b[y];
        //vector<long long>s(0);
        long long S(0);
        int b[y];
        for(int i=0;i<y;i++)
        {
            scanf("%d",&b[i]);
            S+=b[i];
            binarysearch()
        }
    }
    return 0;
}
