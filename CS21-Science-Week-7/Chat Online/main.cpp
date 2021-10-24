#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast_ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_in freopen("input.txt", "r", stdin);
#define file_out freopen("output.txt", "w", stdout);
#define el "\n"
#define mod 1000000007
#define pb push_back
#define pp pop_back

void solve(){
    int p, q, l ,r;
    cin >> p >> q >> l >> r;
    vector<pair<int, int>> a, b;
    for(int i = 0; i < p; i++){
        int x, y;
        cin >> x >> y;
        a.pb({x, y});
    }
    for(int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        b.pb({x, y});
    }
    int ans = 0;
    for(int i = l; i <= r; i++){
        int cnt = 0;
        for(auto x : a){
            for(auto y : b){
                if(x.first <= y.second + i && x.second >= y.first + i)
                    cnt = 1;
            }
        }
        ans += cnt;
    }
    cout << ans << el;
}

int main(){
#ifndef ONLINE_JUDGE
    file_in
    file_out
#endif
    fast_ios
    solve();
    return 0;
}
