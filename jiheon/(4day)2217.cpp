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

int rof[100001];
int _max, num, weight = 0;

int main(){
    input(N);
    
    f0(i, N) cin>>rof[i];

    sort(rof, rof+N, greater<int>());
    _max = rof[0];

    f(i, 1, N){
        num = i + 1;
        weight = num * rof[i];

        if(weight > _max)
            _max = weight;
    }

    printf("%d", _max);
}
