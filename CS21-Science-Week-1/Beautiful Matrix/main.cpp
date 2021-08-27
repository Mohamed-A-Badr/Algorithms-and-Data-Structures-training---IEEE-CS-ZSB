#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define E 2.768

void solve(){
    int arr[5][5];
    int posi = 0, posj = 0, cnt = 0;
    int i, j;
    for( i = 0; i < 5; i++){
        for( j = 0; j < 5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                posi = i;
                posj = j;
            }
        }
    }

    cnt = abs(posj+1 - 3) + abs(posi + 1 - 3);
    cout << cnt << "\n";
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);
    solve();
    return 0;
}