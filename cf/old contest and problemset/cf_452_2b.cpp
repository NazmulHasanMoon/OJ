#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[48]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
    int n;
    bool t=false;
    cin>>n;
    int x[n],s(0);
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]==29)
            s++;
        if(s==2){
            cout<<"NO\n";
            return 0;
        }
    }
     int j=0;
    for(int i=0;i<48;i++)
    {
        int c(0),k(0);
        for(int j=i;j<i+n&&j<48;j++){
            if(a[j]==x[c])
                c++,k++;
            else if((a[j]==28&&x[c]==29)||(a[j]==29&&x[c]==28))
                c++,k++;
            else
                c=0;
           // cout<<c<<' ';
        }
        //cout<<endl;
        if(k==n)
            t=true;
    }
    if(t)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
