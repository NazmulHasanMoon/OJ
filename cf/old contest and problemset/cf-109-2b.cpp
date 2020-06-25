#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define sz 1000
int a[sz],b[sz];
int main()
{
    int n;
    long long s(0),cnt(1);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d %d",&a[i],&b[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(b[i]<b[j]){
                swap(b[i],b[j]);
                swap(a[i],a[j]);
            }
            else if(b[i]==b[j]){
                if(a[i]<a[j]){
                    swap(b[i],b[j]);
                    swap(a[i],a[j]);
                }
            }
        }

    }
    int i=0;
    while(cnt!=0&&i<n){
        cnt=cnt-1+b[i];
        s+=a[i];
        i++;
    }
    cout<<s<<endl;
    return 0;
}
