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

void solve(){
    int n,d;
    cin>>n>>d;
    vector<pair<int,int>> v(n);
    int m, s;
    for (int i = 0; i < n ; ++i) {
        cin>>m>>s;
        v[i].first = m;
        v[i].second = s;
    }
    sort(v.begin(),v.end());
    long long l =0 , r = 0 ,mx = 0 ,sum = 0;
    while (r < n){
        if ((v[r].first - v[l].first) < d){
            sum+=v[r].second;
            mx = max(mx,sum);
            r++;
        }
        else {
            sum-=v[l].second ;
            l++;
        }
    }
    cout<<mx<<el;
}

int main()
{
    fast_ios;
    //file_in;
    //int t; cin >> t;while(t--){solve();}
    solve();
    return 0;
}
