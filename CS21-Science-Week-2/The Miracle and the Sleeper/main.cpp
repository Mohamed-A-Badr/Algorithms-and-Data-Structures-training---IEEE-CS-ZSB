#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;
#define fast_ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define file_in freopen("input.txt", "r", stdin)
#define el "\n"
#define pb push_back
#define E 2.768
#define MAX 1e5

void solve(){
    ll l, r;
    cin >> l >> r;
    if(l <= (r/2) + 1)
        cout << r % ((r / 2) + 1) << el;
    else
        cout << r % l << el;
}

int main()
{
    fast_ios;
    //file_in;
    int t; cin >> t;while(t--){solve();}
    //solve();
    return 0;
}
