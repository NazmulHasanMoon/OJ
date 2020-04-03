#include<bits/stdc++.h>
#define sz 100005
using namespace std;
char c[sz];
int main()
{
    long int s(0),i,n,a,b;
    scanf("%ld %ld %ld",&n,&a,&b);
    getchar();
    scanf("%s",c);
    if(c[a-1]==c[b-1]){
        cout<<"0\n";
    }
    else
        cout<<"1\n";
    return 0;
}
