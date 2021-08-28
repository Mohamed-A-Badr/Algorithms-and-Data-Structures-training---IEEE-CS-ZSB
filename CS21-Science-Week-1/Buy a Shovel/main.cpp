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
    int k, r;
    cin >> k >> r;
    ll sum = 0, i = 1;
    while(true){
        sum = k * i;
        if(sum % 10 == 0)
            break;
        else if(sum % 10 == r)
            break;
        i++;
    }
    cout << i << el;
}

int main()
{
    fast_ios;
    //file_in;
    solve();
    return 0;
}