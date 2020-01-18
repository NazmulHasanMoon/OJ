#include<bits/stdc++.h>
using namespace std;
#define sz 50000
#define ss 5
int a[sz][ss],p[sz][ss];
int main()
{
    int m,n,s,s1,s2,s3,s4;
    scanf("%d %d",&m,&n);
    s=s1=s2=s3=s4=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(j==0)
                s+=a[i][j],p[i][j]=s;
            else if(j==1)
                s1+=a[i][j],p[i][j]=s1;
            else if(j==2)
                s2+=a[i][j],p[i][j]=s2;
            else if(j==3)
                s3+=a[i][j],p[i][j]=s3;
            else if(j==4)
                s4+=a[i][j],p[i][j]=s4;
        }
    }
    for(int i=1;i<n;i++){
        p[0][i]+=p[0][i-1];
        //c[0]+=a[0][i];
    }
    for(int i=1;i<m;i++)
        for(int j=1;j<n;j++)
            p[i][j]=max(p[i][j-1],p[i-1][j])+a[i][j];
    for(int i=0;i<m-1;i++)
        printf("%d ",p[i][n-1]);
    printf("%d\n",p[m-1][n-1]);
    return 0;
}
