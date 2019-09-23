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

vector<int*> d;

int main() {
    fastio;

    input(N);

    input(r);
    input(g);
    input(b);

    f0(n, N-1) {
        input(r2);
        input(g2);
        input(b2);
        int arr[3] = {
                r2 + min(g, b),
                g2 + min(r, b),
                b2 + min(r, g),
        };
        d.push(arr);
        r = arr[0];
        g = arr[1];
        b = arr[2];
    }

    int* arr = d.back();
    cout << min(min(arr[0], arr[1]), arr[2]) << endl;
}
