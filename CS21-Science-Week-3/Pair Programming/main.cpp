#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast_ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define file_in freopen("input.txt", "r", stdin)
#define el "\n"
#define pb push_back
#define E 2.768
#define MAX 1e5

void solve(){
    ll k , n , m;
    cin >> k >> n >> m;
    vector<ll> mono(n) , pol(m),res;
    for (int i = 0; i < n ; i++)
        cin >> mono[i];
    for (int i = 0; i < m; i++)
        cin >> pol[i] ;
    ll i = 0 , j = 0 ;
    while(i < n || j < m){
        if( i < n && mono[i] <= k){
            res.pb(mono[i]);
            if(mono[i] == 0)
                k++;
            i++;
        }
        else if( j < m && pol[j] <= k){
            res.pb(pol[j]);
            if(pol[j] == 0)
                k++;
            j++;
        }
        else
            break;
    }
    if(res.size() != n+m )
        cout << "-1";
    else
        for (int i = 0; i < n+m ; i++)
            cout << res[i] << " ";
    cout << endl;
}

int main()
{
    fast_ios;
    //file_in;
    int t; cin >> t;while(t--){solve();}
    //solve();
    return 0;
}
