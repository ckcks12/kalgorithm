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
    vector<int> v;
    f0(n, N) {
        input(x);
        v.emplace_back(x);
    }

    sort(v.begin(), v.end());
    int sum = accumulate(all(v), 0);

    cout << round((double)sum / (double)sz(v)) << endl;
    cout << v[floor(sz(v)/2)] << endl;
    cout << 

    for (auto& i : v)
        cout << i << endl;
}
