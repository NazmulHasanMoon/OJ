#include<bits/stdc++.h>
using namespace std;

#define sc scanf
#define pf printf
#define sz 100

int T;




int main() {

        struct rest {

            int s, pt, m;
            int Mn[sz];
        }R[sz];

    int i , f, id ,j, tm;
    int af, cu, cs, res[sz];;
    sc("%d", &T);
    cs = 1;
    while(T--) {

        sc("%d", &tm); f = 1;
        for(i = 1; i <= tm; i++) {
            sc("%d", &id);
            sc("%d %d %d", &R[id].s, &R[id].pt, &R[id].m);
            for(j = 1; j <= R[id].m; j++) sc("%d", &R[id].Mn[j]);
        }
        ///pf("mazhar");

        for(i = 1; i <= tm; i++) sc("%d", &res[i]);

        for(i = tm -1; i >=1; i--) {

            af = res[i+1], cu = res[i];

            if(R[cu].s == R[af].s) {

                 if(R[cu].pt > R[af].pt) {

                    for(j = 1; j <= R[cu].m; j++){

                        R[cu].pt += R[cu].Mn[j]; R[cu].s += 1;
                        if(R[cu].s > R[af].s) { f++; break;}
                    }
                }
            }
            else if(R[cu].s < R[af].s) {
                if(R[cu].m >= (R[af].s - R[cu].s)) {
                    for(j = 1; j <= R[cu].m; j++) {
                        R[cu].s += 1; R[cu].pt += R[cu].Mn[j];
                        if(R[cu].s == R[af].s && R[cu].pt <= R[af].pt) {f++; break;}
                        else if(R[cu].s > R[af].s) {f++; break;}
                    }
                }
            }
            else f++;
        }
        pf("Case %d: ", cs);
        if(f == tm) pf("We respect our judges :)");
        else pf("Say no to rumour >:");
        pf("\n");
        cs++;
    }
    return 0;
}

/*
2
3
2 3 100 1 130
3 2 110 2 150 160
1 1 110 3 170 175 180
1 2 3
2
1 2 100 0
2 1 110 1 130
2 1

*/
