#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast_ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define el "\n"

int main(){
    fast_ios;
    int n;
    cin>>n;
    int a[n + 2];
    for(int i = 0; i < n; i++) cin>>a[i];
    int mx = 0;
    for(int i = 0; i < n; i++){
        int r=0,l=0;
        int j=i+1;
        while(j<n && a[j] <= a[j-1]){
            r++;
            j++;
        }
        j=i-1;
        while(j>=0 && a[j] <= a[j+1]){
            l++;
            j--;
        }
        mx = max(mx, l + r);
    }
    cout << mx + 1 << endl;
    return 0;
}
