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

int dx[1009] , dy[1009], r[1009] , n;
int dis(int x1 , int y1 , int x2 , int y2){
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}
bool valid(int x , int y){
    for (int i = 0; i < n ; ++i)
        if(dis(x, y, dx[i], dy[i]) <= r[i] * r[i])
            return 0;
    return 1;
}

void solve(){
    ll x1 ,y1 , x2 , y2 , ans=0;
    cin >> x1 >> y1 >> x2 >> y2 >> n;
    for (int i = 0; i < n ; ++i) {
        cin >> dx[i] >> dy[i] >> r[i];
    }
    for (int j = min(x1,x2); j <= max(x1,x2) ; ++j) {
        ans+= valid(j, y1) + valid(j, y2);
    }
    for (int j = min(y1,y2)+1 ; j < max(y1,y2) ; ++j) {
        ans+= valid(x1, j) + valid(x2, j);
    }
    cout<<ans<<endl;
}

int main()
{
    fast_ios;
    //file_in;
    //int t; cin >> t;while(t--){solve();}
    solve();
    return 0;
}
