#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,s1,s,p1,p2;
    while(scanf("%ld",&n)!=EOF){
        long int a[n];
        s=p1=p2=s1=0;
        for(long int i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
            if(i>0)
            {
                if(a[i-1]>a[i]){
                    if(s==0)
                        p1=i;
                    s++;
                }
                else
                {
                    if(p1&&a[i-1]<=a[p1-1]&&a[i-1]<=a[p1]&&a[p1-1]<=a[i]){
                        p2=i;
                    }
                    s1++;
                }
            }
        }
        if(s+p1==n)
            p2=n;
        if(s1==n-1)
            p1=p2=1;
        if(p1&&p2){
                bool x=1;
            if(p1>1&&a[p2-1]<a[p1-2])
                p2=0,x=0;
            for(long int l=p2-2;l>=p1-1&&l>=0;l--)
            {
                if(a[l]<a[l+1]){
                    x=0;
                    break;
                }
            }
            for(long int l=p2-1;l<n-1;l++)
            {
                if(a[l+1]<a[l]){
                    x=0;
                    break;
                }
            }
            if(x){
                cout<<"yes\n"<<p1<<" "<<p2<<endl;
            }
            else
                cout<<"no\n";
        }

        else
            cout<<"no\n";

    }
    return 0;
}
