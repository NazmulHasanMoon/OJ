#include<bits/stdc++.h>
using namespace std ;
#define b_s ( v , x ) binary_search ( v . begin (), v . end (), x )
#define l_b ( v , x ) lower_bound ( v . begin (), v . end (), x )
#define u_b ( v , x ) upper_bound ( v . begin (), v . end (), x )
#define e_r ( v , x ) equal_range ( v . begin (), v . end (), x )
#define faster ios_base :: sync_with_stdio ( 0 ); cin . tie ( 0 ); cout . tie ( 0 );
#define ff first
#define ss second
#define sz 105
vector <int> v [ sz ];
unordered_set <int> st ;
int si [ sz ], par [ sz ], re ( 0 );
int root ( int x )
{
    while(par[ x ]!=x)
    {
        par [ x ] = par [ par [ x ]];
        x = par [ x ];
    }
    return x ;
}
void weighted_union ( int A , int B )
{
    int root_A = root ( A );
    int root_B = root ( B );
    if ( si [ root_A ] < si [ root_B ])
    {
        par [ root_A ] = par [ root_B ];
        si [ root_B ]+=si[ root_A ];
    }
    else
    {
        par [ root_B ] = par [ root_A ];
        si [ root_A ]+=si [ root_B ];
    }

}
int main ()
{
    faster
    int n , m , x , y ;
    cin >> n >> m ;
    for ( int i = 1 ; i <= n ; i ++)
    {
        cin >> x ;
        par [ i ] = i ;
        for ( int j = 0 ; j < x ; j ++)
        {
            cin >> y ;
            v [ y ]. push_back ( i );
            si [ y ] ++;
        }
    }
    bool ck = false ;
    for ( int i = 1 ; i <= m ; i ++)
    {
        if (! v [ i ]. empty ())
        {
            ck = true ;
            int l = v [ i ]. size ();
            if ( l > 1 )
            {
                for ( int j = 1 ; j < l ; j ++)
                    weighted_union ( v [ i ] [ j - 1 ], v [ i ] [ j ]);
            }
        }
    }
    if (! ck )
        return cout << n << '\n' , 0 ;
    for ( int i = 1 ; i <= n ; i ++)
        st.insert(root(i));
    /*cout<<endl;
    for(auto i: st)
        cout<<i<<' ';
    cout<<endl;*/
    cout << st.size()-1<< '\n' ;
    return 0 ;
}

