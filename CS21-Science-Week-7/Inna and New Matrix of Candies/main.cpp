#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast_ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_in freopen("input.txt", "r", stdin);
#define file_out freopen("output.txt", "w", stdout);
#define el "\n"
#define mod 1000000007
#define pb push_back
#define pp pop_back

void solve(){
    int n , m , gc=0 , sc = 0;
    cin >> n >> m;
    char arr[n + 2][m + 2];
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m ; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n ; ++i) {
        bool flag = false;
        for (int j = 0; j < m ; ++j) {
            if(arr[i][j] == 'S' && !flag){
                cout << -1 << el;
                return ;
            }
            else if(arr[i][j] == 'G'){
                flag = true;
            }
        }
    }
    set<int> st;
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m ; ++j) {
            if(arr[i][j] == 'S') sc = j;
            else if(arr[i][j] == 'G') gc = j;
        }
        st.insert(sc - gc);
    }
    cout << st.size() << endl;
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
