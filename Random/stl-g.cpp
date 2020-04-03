#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
int main()
{
    int t;
    //cin>>t;
    scanf("%d",&t);
    getchar();
    for(int i=0; i<t; i++)
    {
        map<string,string>mp;
        string c;
        cin>>c;
        long int l;
        l=c.size();
        for(long long j=1;j<l;j++){
            string ky,vl;
            while(c[j]!=':')
                ky.push_back(c[j]),j++;
            j++;
            while(c[j]!=','&&c[j]!='}'&&j!=l)
                vl.push_back(c[j]),j++;
            //cout<<ky<<endl<<vl<<endl;
            if(vl[0]=='-'&&vl[1]=='0'){
                for(int q=1;;){
                    vl.erase(q,q);
                    if(vl[q]!='0'||vl.size()==2)
                        break;
                }
            }
            else if(vl[0]=='0'){
                    //cout<<"enter";
                for(int q=0;;){
                    vl.erase(q,q+1);
                    //cout<<vl<<endl;
                    if(vl[0]!='0'||vl.size()==1)
                        break;
                }
            }
            //cout<<"vl="<<vl<<endl;
            mp[ky]=vl;
        }
        string od;
        cin>>od;
        map<string,string>m;
        l=od.size();
        for(long long j=1;j<l;j++){
            string ky,vl;
            while(od[j]!=':')
                ky.push_back(od[j]),j++;
            j++;
            while(od[j]!=','&&od[j]!='}'&&j!=l)
                vl.push_back(od[j]),j++;
            //cout<<ky<<endl<<vl<<endl;
            if(vl[0]=='-'&&vl[1]=='0'){
                for(int q=1;;){
                    vl.erase(q,q);
                    if(vl[q]!='0'||vl.size()==2)
                        break;
                }
            }
            else if(vl[0]=='0'){
                    //cout<<"enter";
                for(int q=0;;){
                    vl.erase(q,q+1);
                    //cout<<vl<<endl;
                    if(vl[0]!='0'||vl.size()==1)
                        break;
                }
            }
            m[ky]=vl;
        }
        //cout<<m.size()<<endl;
        vector<string>f;
        vector<string>sd;
        vector<string>th;

        map<string,string>::iterator it=m.begin(),itt=mp.begin();
        //long long x(0);
        for(;itt!=mp.end();itt++){

            if(m.find(itt->ff)==m.end())
                sd.push_back(itt->ff);
            else{
                if(m[itt->ff]!=mp[itt->ff])
                    th.push_back(itt->ff);
            }
        }
        for(;it!=m.end();it++){
            if(mp.find(it->ff)==mp.end())
                f.push_back(it->ff);
        }
        if(f.empty()&&sd.empty()&&th.empty())
            printf("No changes\n");
        else
        {
            if(!f.empty())
            {
                long int x(1);
                printf("+");
                vector<string>::iterator ir=f.begin();
                for(; ir!=f.end(); ir++)
                {
                    cout<<*ir;
                    if(x<f.size())
                        printf(",");
                    x++;

                }
                printf("\n");
            }
            if(!sd.empty())
            {
                printf("-");
                long int x(1);
                vector<string>::iterator ir=sd.begin();
                for(; ir!=sd.end(); ir++)
                {
                    cout<<*ir;
                    if(x<sd.size())
                        printf(",");
                    x++;
                }
                printf("\n");

            }
            if(!th.empty())
            {
                printf("*");
                long int x(1);
                vector<string>::iterator ir=th.begin();
                for(; ir!=th.end(); ir++)
                {
                    cout<<*ir;
                    if(x<th.size())
                        printf(",");
                    x++;
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
