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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int cnt = 1;
    for(int i = 0; i < n - 1; i++)
        if(s[i] != s[i + 1])
            cnt++;
    if(b < 0){
        cout << a * n + b * (cnt / 2 + 1) << el;
    }
    else
        cout << a * n + b * n << el;
}

int main()
{
    fast_ios;
    //file_in;
    int t; cin >> t;while(t--){solve();}
    //solve();
    return 0;
}
