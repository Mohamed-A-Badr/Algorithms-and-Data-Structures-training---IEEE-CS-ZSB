#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define fast_ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define file_in freopen("input.txt", "r", stdin)
#define el "\n"
#define pb push_back
#define E 2.768
#define MAX 1e5

void solve(){
    ll a, b;
    cin >> a>> b;
    if(a == b){
        cout << 0 << " " << 0 << el;
        return;
    }
    cout << abs(a - b) << " " <<
        min(a % abs(a - b), abs(a - b) - a % abs(a - b)) << el;
}

int main()
{
    fast_ios;
    //file_in;
    int t; cin >> t;while(t--){solve();}
    //solve();
    return 0;
}
