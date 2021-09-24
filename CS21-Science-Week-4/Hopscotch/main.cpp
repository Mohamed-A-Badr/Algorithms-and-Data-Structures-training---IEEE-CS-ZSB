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
    ll a , x , y ;
    cin >> a >> x >> y;
    if(abs(x) >= a) {
        cout << -1 << endl;
        return ;
    }

    if(y == 0){
        cout<<-1<<endl;
        return ;
    }
    if(y % a == 0){

        cout<<-1<<endl;
        return ;
    }
    ll ans = 0 , cnt;
    ans = 1 + (y/a) ;
    if( ans == 1){
        if(abs(x) >= ((a+1)/2))
            cnt=-1;
        else cnt = 1;
    }
    else if(ans %2 == 1) {

        ll odd = ans / 2;
        cnt = odd * 2 + (odd - 1) + 2;
        if (x < 0)
            cnt--;
        if (x == 0) cnt = -1;

    }
    else{
        ll odd = (ans - 1) / 2 ;
        cnt = odd * 2 + (odd + 1) + 1 ;
        if(abs(x) >= ((a+1)/2)) cnt = -1 ;
    }
    cout << cnt ;
}

int main()
{
    fast_ios;
    //file_in;
    //int t; cin >> t;while(t--){solve();}
    solve();
    return 0;
}
