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
    int a, b;
    cin >> a >> b;
    int x = 0;
    if(a % 4 == 1)
        x = a - 1;
    else if(a % 4 == 2)
        x = 1;
    else if(a % 4 == 3)
        x = a;
    if(x == b)
        cout << a << el;
    else if((x ^ b) != a)
        cout << ++a << el;
    else
        cout << a + 2 << el;
}

int main()
{
    fast_ios;
    //file_in;
    int t; cin >> t;while(t--){solve();}
    //solve();
    return 0;
}
