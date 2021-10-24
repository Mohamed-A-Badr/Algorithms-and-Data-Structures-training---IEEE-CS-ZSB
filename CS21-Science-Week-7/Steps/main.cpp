#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast_ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_in freopen("input.txt", "r", stdin);
#define file_out freopen("output.txt", "w", stdout);
#define el "\n"
#define mod 1000000007
#define pb push_back
#define pp pop_back

void solve(){
    int n, m, k;
    ll x1, y1, x2, y2;
    cin >> n >> m >> x1 >> y1 >> k;
    ll ans = 0;
    while(k--){
        cin >> x2 >> y2;
        for(int msk = (1 << 30); msk > 0; msk >>= 1){
            if(1 <= x1 + msk * x2 and x1 + msk * x2 <= n
            and 1 <= y1 + msk * y2 and y1 + msk * y2 <= m){
                x1 += msk * x2;
                y1 += msk * y2;
                ans += msk;
            }
        }
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
