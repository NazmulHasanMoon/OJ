#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p,n,y,s(0),x;
    cin>>n;
    p=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
        if(i==0)
            x=y=*(p+i);
        if(i>0)
        {
            if(y>*(p+i))
            {
                s++;
                y=*(p+i);
            }
            else if(x<*(p+i))
            {
                s++;
                x=*(p+i);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
