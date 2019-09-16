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

    f(i, 1, N) {
        int j = i;
        int s = 0;
        while (1) {
            int k = j % 10;
            s += k;
            if (k == j) break;
            j /= 10;
        }
        if (N == i + s) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}
