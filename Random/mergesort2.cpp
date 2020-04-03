#include<bits/stdc++.h>
using namespace std;
int n;
template<class T>
void merge(T x[],int min,int mid,int max)
{
    int m,i,j,k;
    T l[max];
    m=mid+1;
    cout<<endl<<min<<" "<<mid<<" "<<max<<endl;
    for(i=j=min;j<=mid&&m<=max;i++)
    {
        if(x[j]<=x[m])
        {
            l[i]=x[j];
            j++;
        }
        else
        {
            l[i]=x[m],m++;
        }
    }
    if(j>mid)
    {
        for(k=m;k<=max;k++)
            l[i]=x[k],i++;
    }
    else
    {
        for(k=j;k<=m;k++)
            l[i]=x[k],i++;
    }
    for(i=min;i<=max;i++)
        x[i]=l[i];
}
template<class T>
void sort1(T x[],int min,int max)
{
    int mid;
    if(min<max)
    {
        mid=(min+max)/2;
        sort1(x,min,mid);
        cout<<min<<" "<<max<<endl;
        sort1(x,mid+1,max);
        merge(x,min,mid,max);
    }
    else
    return ;

}
int main()
{
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    sort1(x,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",x[i]);
    return 0;
}
