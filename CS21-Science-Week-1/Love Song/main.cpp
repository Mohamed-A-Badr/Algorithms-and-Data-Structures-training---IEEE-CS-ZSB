#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define fast_ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define file_in freopen("input.txt", "r", stdin)
#define el "\n"
#define pb push_back
#define sz size()
#define be begin()
#define en end()
#define E 2.768

string sub(string s, int pos1, int pos2){
    string temp = "";
    for(int i = pos1; i <= pos2; i++)
        temp += s[i];
    return temp;
}

void solve(){
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> arr;
    arr.pb(0);
    for(int i = 1; i <= n; i++)
        arr.pb(arr[i - 1] + s[i - 1] - 'a' + 1);
    while(q--){
        ll l, r;
        cin >> l>> r;
        cout << arr[r] - arr[l - 1] << el;
    }
}

int main()
{
    fast_ios;
    //file_in;
    solve();
    return 0;
}