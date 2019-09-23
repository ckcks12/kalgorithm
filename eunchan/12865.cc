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

vector<int> W, V;
int D[101][100001] = {0,};

int main() {
    fastio;

    input(N);
    input(K);
    f0(n, N) {
        input(w);
        input(v);
        W.push(w);
        V.push(v);
    }

    vector<vector<int>> D;

    vector<int> d;
    f0(j, K + 1)
        if (j < W[0])
            d.push(0);
        else
            d.push(V[0]);
    D.push(d);

    f(i, 1, N) {
        vector<int> d;
        d.push(0);
        f(j, 1, K + 1) {
            if (j < W[i])
                d.push(D[i-1][j]);
            else
                d.push(max(D[i-1][j], D[i-1][j-W[i]] + V[i]));
        }
        D.push(d);
    }

    cout << D[N-1][K] << endl;
}
