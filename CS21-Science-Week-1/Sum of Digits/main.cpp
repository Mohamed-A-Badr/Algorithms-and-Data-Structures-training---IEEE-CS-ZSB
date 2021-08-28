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

void solve(){
    string s;
    cin >> s;
    ll cnt = 0;
    while(s.size() > 1){
        ll sum = 0;
        for(int i = 0; i < s.size(); i++)
            sum += s[i] - '0';
        s = to_string(sum);
        cnt++;
    }
    cout << cnt << el;
}

int main()
{
    fast_ios;
    //file_in;
    solve();
    return 0;
}