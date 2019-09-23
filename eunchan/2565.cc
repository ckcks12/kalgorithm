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
#define fa(a, v) for (auto& (a) : (v))
#define input(x) \
    int(x);      \
    cin >> x;
#define push emplace_back
#define ll long long
using namespace std;

int main() {
    fastio;

    vector<pair<int, int>> V;
    vector<vector<int>> G;
    vector<int> H;
    input(N);
    f0(n, N) {
        input(x);
        input(y);
        V.push(x, y);
    }

    sort(V.begin(), V.end(), [](pair<int, int> a, pair<int, int> b) -> bool {
        return a.xx < b.xx;
    });

    fa(v, V)
        H.push(v.yy);

    vector<int> D(N);
    f0(i, N) {
        D[i] = 1;
        f(j, 0, i) {
            if (H[j] < H[i])
                D[i] = max(D[i], D[j] + 1);
        }
    }

    cout << N - *max_element(D.begin(), D.end()) << endl;
}
