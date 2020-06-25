#include<bits/stdc++.h>
using namespace std;
long long k,j,l,x,s;
void per(){
    while(x!=0)
        {
            s+=x%10;
            x/=10;
            if(s>10)
                break;
        }

}
int main()
{
    cin>>k;
    j=19;
    for(l=1; l<=k; j+=9)
    {
        x=j,s=0;
        per();
        if(s==10)
            l++;
        //cout<<j<<" "<<l<<endl;
    }
    cout<<j-9<<endl;
    return 0;
}
