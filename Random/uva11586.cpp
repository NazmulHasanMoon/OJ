#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string s;

        getline(cin,s);
        int l=s.size();

        bool t=true;
        if(s[0]==s[l-1])
            cout<<"NO LOOP\n",t=false;
        if(t)
        {
            for(int i=1,j=3;j<l-1;j+=3,i+=3)
            {
                if(s[i]==s[j]){
                    cout<<"NO LOOP\n",t=false;
                    break;
                }
            }
            if(t)
                cout<<"LOOP\n";
        }
    }
    return 0;
}
