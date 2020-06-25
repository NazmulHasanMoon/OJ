#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    x=n%10;
    if(x==0)
        cout<<n<<endl;
    else
    {
        n=n/10;
        if(x>5)
            cout<<(n+1)*10<<endl;
        else
            cout<<n*10<<endl;

    }
    return 0;
}
