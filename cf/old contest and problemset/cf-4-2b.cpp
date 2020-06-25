#include<bits/stdc++.h>
using namespace std;
#define sz 30
int a[sz],b[sz],s[sz];
int main()
{
    int d,st,s1,s2;
    scanf("%d %d",&d,&st);
    s1=s2=0;
    for(int i=0;i<d;i++){
        scanf("%d %d",&a[i],&b[i]);
        s1+=a[i],s2+=b[i];
        s[i]=a[i];
    }
    if(s1>st){
        printf("NO\n");
        return 0;
    }
    if(s1<st){
            int x;
        for(int i=d-1;s1!=st&&i>=0;i--){
            s1-=a[i];
            if(s1+b[i]>st){
                x=(st-s1);
                if(x<a[i])
                    s1+=a[i];
                else
                    s[i]=x,s1+=x;
                //break;
            }
            else{
                s1+=b[i];
                s[i]=b[i];
            }
        }
    }
    if(s1==st){
        printf("YES\n");
        for(int i=0;i<d;i++)
            printf("%d ",s[i]);
    }
    else
        printf("NO\n");
    return 0;
}
