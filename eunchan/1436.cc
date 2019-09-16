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
    int i = 666;
    while (N > 0) {
        int continuous = 0;
        int j = i;
        while (j > 0) {
            if (j % 10 == 6)
                ++continuous;
            else
                continuous = 0;
            if (continuous == 3)
                break;
            j /= 10;
        }
        if (continuous == 3)
            --N;
        ++i;
    }
    cout << i - 1 << endl;
}
