#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast_ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define file_in freopen("input.txt", "r", stdin)
#define el "\n"
#define E 2.768
#define pi 3.141592653590
#define mod 1000000007

ll fp(long long x, unsigned long long y){
    ll res = 1;
    x = x % mod;
    if (x == 0) return 0;
    while (y > 0){
        if (y & 1)
            res = (res*x) % mod;
        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}
bool isPrime(ll n){
    if(n == 2) return true;
    if(n < 2 or n % 2 == 0) return false;
    for(ll i = 3; i * i <= n; i += 2)
        if(n % i == 0) return false;
    return true;
}
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main(){
    fast_ios;
    int n;
    cin >> n;
    int ans = 0, pos = 1;
    while(n){
        if(n % 10 == 4)
            ans += pos;
        else
            ans += 2*pos;
        n /= 10;
        pos *= 2;
    }
    cout << ans<< el;
    return 0;
}

