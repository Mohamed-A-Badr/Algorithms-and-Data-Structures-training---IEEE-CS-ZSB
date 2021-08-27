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

int main()
{
    fast_ios;
    vector<int> arr(2001);
    int in = 0;
    for(int i = 1; i <= 2000; i++) {
        if (i % 10 != 3 && i % 3 != 0) {
            arr[in] = i;
            in++;
        }
    }
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        cout << arr[k - 1] << el;
    }
    return 0;
}