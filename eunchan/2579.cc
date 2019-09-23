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

int d[501][501] = {0, };

int main() {
    fastio;

    input(N);
    vector<int> v;
    f0(n, N) {
        input(x);
        v.push(x);
    }

    vector<vector<int>> d;
    d.push(vector<int>{v[0], v[0]});
    d.push(vector<int>{v[1], v[0] + v[1]});

    f(i, 2, N) {
        vector<int> p;
        p.push(v[i] + max(d[i-2][0], d[i-2][1]));
        p.push(v[i] + d[i-1][0]);
        d.push(p);
    }

    cout << max(d.back()[0], d.back()[1]) << endl;
}
