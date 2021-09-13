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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin(), arr.end());
    int cnt = 1;
    for(int i = 0; i < n - 1; i++) {
        if (arr[i + 1].second - arr[i].second != 1)
            cnt++;
    }
    if(cnt <= k)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    fast_ios;
    //file_in;
    int t; cin >> t;while(t--){solve();}
    //solve();
    return 0;
}
