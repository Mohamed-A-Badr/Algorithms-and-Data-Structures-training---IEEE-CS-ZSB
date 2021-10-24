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
    int n, m;
    char c;
    cin >> n >> m >> c;
    set<char> s;
    vector<vector<char>>a(n+2,vector<char>(m+2,'.'));
    for (int i = 1; i <= n ; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i =1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == c)
                s.insert({a[i - 1][j], a[i][j - 1], a[i + 1][j], a[i][j + 1]});
            s.erase(c);
            s.erase('.');
        }
    }
    cout << s.size();
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
