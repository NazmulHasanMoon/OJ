#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    char c[4][20]={"pushLeft","pushRight","popLeft","popRight"};
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        deque<int>d;
        printf("Case %d:\n",i);
        scanf("%d %d",&n,&m);
        char ch[15],cc[15],ss[7];
        getchar();
        for(int j=0;j<m;j++){
            gets(ch);
            int x,y,z;
            y=z=0;
            int l=strlen(ch);
            if(isdigit(ch[l-1]))
            {
                int f(0);
                for(int k=0;k<l;k++){
                    if(isspace(ch[k]))
                        f=k;
                    else if(!f)
                        cc[y++]=ch[k];
                    if(f&&k>f)
                        ss[z++]=ch[k];
                }
                cc[y]='\0';
                ss[z]='\0';
                x=atoi(ss);
            }
            else
                strcpy(cc,ch);
            if(strcmp(cc,c[0])==0)
            {
                if(d.size()<n){
                    d.push_back(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
                else
                    cout<<"The queue is full\n";
            }
            else if(strcmp(cc,c[1])==0)
            {
                if(d.size()<n){
                    d.push_front(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
                else
                    cout<<"The queue is full\n";
            }
            else if(strcmp(cc,c[2])==0)
            {
                if(!d.empty()){
                    cout<<"Popped from left: "<<d.back()<<endl;
                    d.pop_back();
                }
                else
                    cout<<"The queue is empty\n";
            }
            else if(strcmp(cc,c[3])==0)
            {
                if(!d.empty()){
                    cout<<"Popped from right: "<<d.front()<<endl;
                    d.pop_front();
                }
                else
                    cout<<"The queue is empty\n";
            }
        }
    }
    return 0;
}
