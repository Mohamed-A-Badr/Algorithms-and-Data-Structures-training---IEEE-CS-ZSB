#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast_ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define file_in freopen("input.txt", "r", stdin)
#define el "\n"
#define pb push_back
#define E 2.768
#define MAX 1e5

ll solve(ll amount, vector<ll> &coins)
{
    ll size = coins.size();
    ll wayCnt[size + 1][amount + 1];

    for(int j=0;j<amount+1;j++)
        wayCnt[0][j] = 0;
    for(int i=0;i<size+1;i++)
        wayCnt[i][0] = 1;
    for(int i =1 ;i<size+1;i++)
    {
        for(int j=1;j<amount+1;j++)
        {
            if(coins[i-1]<=j)
                wayCnt[i][j] = wayCnt[i - 1][j] + wayCnt[i][j - coins[i - 1]];
            else
                wayCnt[i][j] = wayCnt[i - 1][j];
        }
    }
    return wayCnt[size][amount];
}

int main() {
    fast_ios;
    //file_in;
    //solve();
    int n;
    int m;
    cin >> n >> m;
    vector<ll> arr(m);
    for(int i = 0; i < m; i++)
        cin >> arr[i];
    ll ans = solve(n, arr);
    cout << ans;
    return 0;
}
