#include<bits/stdc++.h>
using namespace std;
int arr[100];
int fun(int n)
{
    if(n==0)
    {
        arr[n]=0;
        return arr[n];
    }
    if(n==1)
    {
        arr[n]=1;
        return arr[n];
    }
    if(n==2)
    {
        arr[n]=2;
        return arr[n];
    }


    if(n==3)
    {
        arr[n]=4;
        return arr[n];
    }
    if(arr[n])
        return arr[n];
    return fun(n-1)+fun(n-2)+fun(n-3);
}
int main()
{
    int n;
    cin>>n;
    cout<<fun(n)<<endl;
    return 0;
}
