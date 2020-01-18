#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define sz 11
char x[sz][sz];
int a[sz][sz],b[sz][sz];
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++)
        scanf("%s",x[i]),getchar();
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(x[i][j]=='W'&&x[i][j+1]=='P'&&(j+1)<c){

                a[i][j]=1;
                b[i][j+1]=1;
            }
            if(x[i][j]=='W'&&x[i+1][j]=='P'&&(i+1)<r){
                    //s++;a
                    a[i][j]=1;
                    b[i+1][j]=1;
            }
            if(x[i][j]=='P'&&x[i][j+1]=='W'&&(j+1)<c){
                a[i][j+1]=1;
                b[i][j]=1;
            }
            if(x[i][j]=='P'&&x[i+1][j]=='W'&&(i+1)<r){
                    a[i+1][j]=1;
                    b[i][j]=1;
            }
        }
    }

    int s,S;
    s=S=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j])s++;
            if(b[i][j])S++;
        }
    }
    if(s>S)
        s=S;
    printf("%d\n",s);
    return 0;
}
