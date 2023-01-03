#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A. Burenka Plays with Fractioins

void solve(int tt) {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll x = a * d;
    ll y = b * c;
    if(x == y) {
        cout << "0\n";
    } else if((y != 0 && x % y == 0) || (x != 0 && y % x == 0)) {
        cout << "1\n";
    } else {
        cout << "2\n";
    }
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
