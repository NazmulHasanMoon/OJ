#include<bits/stdc++.h>
#include<cmath>
#define sz 20000
using namespace std;
long int a[sz];
int main()
{
    long int n,c(0),k,s(0);
    int x(1);
    scanf("%ld",&n);
    s=n/2;
    cout<<s<<endl;
    if(n%2==0)
    {
        for(long int i=0;i<s-1;i++)
            printf("2 ");
        cout<<2<<endl;
    }
    else{
        for(int i=0;i<s-1;i++)
                 printf("2 ");
        cout<<3<<endl;
    }
    return 0;
}
