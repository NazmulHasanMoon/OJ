#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,c;
    while(cin>>s>>c)
    {
        int l=s.size();
        int l2=c.size();
        double re=0.0;
        int s1,s2,i;
        s1=s2=0;
        for(i=0; i<l&&i<l2; i++)
        {
            if(isupper(s[i]))
                s[i]=tolower(s[i]);
            if(isupper(c[i]))
                c[i]=tolower(c[i]);
            //cout<<s[i]<<' '<<c[i]<<endl;
            s1+=(int(s[i]-'a')+1);
            s2+=(int(c[i]-'a')+1);
        }
        //cout<<i<<endl;
        if(i<l2)
        {
            for(int j=i; j<l2; j++)
            {
                if(isupper(c[j]))
                    c[j]=tolower(c[j]);
                s2+=(int(c[j]-'a')+1);
            }
        }
        else if(i<l)
        {
            for(int j=i; j<l; j++)
            {
                if(isupper(s[j]))
                    s[j]=tolower(s[j]);
                s1+=(int(s[j]-'a')+1);

            }
        }
        int x,y;
        x=y=0;
        //cout<<endl<<s1<<endl<<s2<<endl;;
        while(s1!=0)
        {
            x+=s1%10;
            s1/=10;
            if(s1==0)
            {
                s1=x;
                x=0;
                //cout<<s1;
                if(s1/10==0)
                    break;
            }
        }
        while(s2!=0)
        {
            y+=s2%10;
            s2/=10;
            if(s2==0)
            {
                s2=y;
                y=0;
                //cout<<s2<<' ';
                if(s2/10==0)
                    break;
            }
        }
        //cout<<s1<<' '<<s2<<endl;;
        re=s2*100/(s1+0.0);
        cout<<setprecision(2)<<fixed<<re<<" %\n";
    }
    return 0;
}
