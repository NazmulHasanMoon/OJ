#include<bits/stdc++.h>
using namespace std;
#define sz 55
char c[sz],ch[sz];
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++){
        vector<string>v;
        stack<string>st;
        st.push("http://www.lightoj.com/");
        v.push_back("http://www.lightoj.com/");
        bool t(1),f(0);
        vector<string>::iterator it=v.begin();
        printf("Case %d:\n",i);
        while(scanf("%s",c))
        {
            getchar();
            if(strcmp(c,"QUIT")==0)
                break;
            if(strcmp(c,"VISIT")==0)
            {
                gets(ch);
                st.push(ch);
                if(v.size()<st.size())
                    v.push_back(ch);
                else{
                    v.erase(v.begin()+st.size()-1,v.end());
                    v.push_back(ch);
                }
                cout<<ch<<endl;

            }
            else if(strcmp(c,"BACK")==0)
            {
                st.pop();
                if(!st.empty())
                    cout<<st.top()<<endl;
                else{
                    cout<<"Ignored\n";
                    st.push("http://www.lightoj.com/");
                }
            }
            else if(strcmp(c,"FORWARD")==0)
            {
                if(st.size()==v.size())
                    cout<<"Ignored\n";
                else{
                    int l=st.size();
                    it=v.begin()+l;
                    st.push(*it);
                    cout<<*it<<endl;
                }
            }

        }
    }
    return 0;
}
