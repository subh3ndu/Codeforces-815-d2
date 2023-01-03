#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// C. Corners

const int INF = 1e9;
const int N = 2000;
int a[N][N];

void solve(int tt) {
    int n, m;
    ll sum = 0;
    cin >> n >> m;
    string s;
    for(int i = 0; i < n; ++i) {
        cin >> s;
        for(int j = 0; j < m; ++j) {
            a[i][j] = s[j] - '0';
            sum += a[i][j];
        }
    }

    int mn = INF;
    for(int i = 0; i < n-1; ++i) {
        for(int j = 0; j < m-1; ++j) {
            int cnt = a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
            if(cnt == 0)
                continue;
            mn = min(mn, max(1, cnt-1));
        }
    }

    if(sum == 0) 
        cout << "0\n";
    else 
        cout << 1 + sum - mn << "\n";
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
