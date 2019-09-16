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

int board[51][51];

int main() {
    fastio;

    input(M);
    input(N);

    int conv[256];
    conv['W'] = -1;
    conv['B'] = 1;
    f0(m, M) {
        f0(n, N) {
            char x;
            cin >> x;
            board[m][n] = conv[x];
        }
    }

    int answer = 2147483646;
    M -= 7;
    N -= 7;
    f0(m, M) {
        f0(n, N) {
            int cnt = 0;
            int check = -1;
            f(y, m, m+8) {
                f(x, n, n+8) {
                    if (board[y][x] != check)
                        ++cnt;
                    check *= -1;
                }
                check *= -1;
            }
            if (cnt == 0) {
                cout << 0 << endl;
                return 0;
            }
            answer = min(answer, cnt);
            answer = min(answer, 64 - cnt);
        }
    }
    cout << answer << endl;
}
