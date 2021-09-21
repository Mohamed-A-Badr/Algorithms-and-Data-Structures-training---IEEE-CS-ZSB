#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define fast_ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define file_in freopen("input.txt", "r", stdin)
#define el "\n"
#define E 2.768

int main(){
    fast_ios;
    //file_in;
    int n;
    cin >> n;
    vector <pair<int, int>> arr;
    vector <pair<int, int>> srt;
    int a, b;
    bool f = false;
    while(n--){
        cin >> a >> b;
        arr.push_back({a, b});
        if(a > b || a < b)
            f = true;
    }
    
    srt = arr;
    sort(srt.begin(), srt.end());
    reverse(srt.begin(), srt.end());

    bool st = true;
    for(int j = 0, i = 0; j < arr.size(); j++, i++){
        if(srt[i] != arr[j])
            st = false;
    }

    if(f)
        cout << "rated\n";
    else if(!f && !st)
        cout << "unrated\n";
    else if(!f && st)
        cout << "maybe\n";

    return 0;
}
