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

int D[1002][1002] = {0, };

int main() {
    fastio;

    string A, B;
    cin >> A >> B;

    f(i, 1, A.size() + 1) {
        f(j, 1, B.size() + 1) {
            if (A[i-1] == B[j-1]) {
                D[i][j] = D[i-1][j-1] + 1;
            } else {
                D[i][j] = max(D[i-1][j], D[i][j-1]);
            }
        }
    }

    cout << D[A.size()][B.size()] << endl;
}
