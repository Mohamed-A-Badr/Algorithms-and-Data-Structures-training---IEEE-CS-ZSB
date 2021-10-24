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
    int n;
    cin >> n;
    vector<int> v;
    set<int> st;
    for(int i =0; i < n; i++){
        int x;
        cin >>x;
        st.insert(x);
    }
    if(st.size() < 3)
        cout << "YES\n";
    else if(st.size() == 3){
        for(auto it :  st)
            v.pb(it);
        if(v[0] - v[1] == v[1] - v[2]) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "NO\n";
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
