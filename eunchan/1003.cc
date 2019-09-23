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

ll zero = 0;
ll one = 0;
unordered_map<int, pair<ll, ll>> cache;

int fibo(int n) {
    if (cache.count(n)) {
        zero += cache[n].xx;
        one += cache[n].yy;
        return -1;
    }
    if (n == 0) {
        ++zero;
        return 0;
    } else if (n == 1) {
        ++one;
        return 1;
    } else {
        return fibo(n-1) + fibo(n-2);
    }
}

int main() {
    fastio;

    f0(i, 41) {
        zero = 0;
        one = 0;
        fibo(i);
        cache[i] = make_pair(zero, one);
    }

    input(T);
    f0(t, T) {
        input(N);
        zero = 0;
        one = 0;
        fibo(N);
        cout << zero << " " << one << endl;
    }
}
