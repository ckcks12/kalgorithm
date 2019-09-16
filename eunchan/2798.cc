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
    input(M);

    vector<int> v;
    f0(n, N) {
        input(x);
        v.emplace_back(x);
    }

    int m = 0;
    f0(i, N-2) {
        f(j, i+1, N-1) {
            f(k, j+1, N) {
                int x = v[i] + v[j] + v[k];
                if (x > M) continue;
                if (x == M) {
                    cout << x << endl;
                    return 0;
                }
                if (x < M)
                    m = max(m, x);
            }
        }
    }
    cout << m << endl;
}
