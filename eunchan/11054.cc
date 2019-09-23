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

    vector<int> V;
    vector<int> D;
    vector<int> D2;
    input(N);
    f0(n, N) {
        input(x);
        V.push(x);
        D.push(1);
        D2.push(1);
    }

    f0(i, N) {
        f(j, 0, i) {
            if (V[j] < V[i])
                D[i] = max(D[i], D[j] + 1);
        }
    }

    for (int i=N-1; i>=0; --i) {
        for(int j=N-1; j>i; --j) {
            if (V[j] < V[i])
                D2[i] = max(D2[i], D2[j] + 1);
        }
    }

    f0(n, N)
        D[n] += D2[n];

    cout << *max_element(D.begin(), D.end()) - 1 << endl;
}
