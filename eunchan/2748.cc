#include <bits/stdc++.h>

#define xx first
#define yy second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define init(x, y) memset(x, y, sizeof(x))
#define endl '\n'
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define f(n, x, y) for (int(n) = (x); (n) < (y); (n)++)
#define f0(n, x) for (int (n) = 0; (n) < (x); (n)++)
#define input(x) \
    int(x);      \
    cin >> x;
#define push emplace_back
#define ll long long
using namespace std;

int main() {
    fastio;

    input(N);

    if (N == 0) {
        cout << 0 << endl;
        return 0;
    } else if (N == 1) {
        cout << 1 << endl;
        return 0;
    }

    ll a, b, c;
    a = 0;
    b = 1;
    f(n, 1, N) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << endl;
}
