#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// B. Interesting Sum

void solve(int tt) {
    int n; 
    cin >> n;
    vector<int> arr(n);
    for(auto &x : arr) 
        cin >> x;

    sort(arr.begin(), arr.end());
    cout << arr[n - 1] + arr[n - 2] - arr[0] - arr[1] << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    for(int i=1; i<=tt; i++) {
        solve(tt);
    }

    return 0;
}
