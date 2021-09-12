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
    long double n;
    cin >> n;
    if(n == 1)
        cout << 1 << " " << 0 << el;
    else {
        ll r = round(n / 3);
        cout << int(n) - (r * 2) << " " << r << el;
    }
}

int main()
{
    fast_ios;
    //file_in;
    int t; cin >> t;while(t--){solve();}
    //solve();
    return 0;
}
