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

int arr[130000], sum[130000];
int _count, depth, cycle;

int main(){
    input(N);
    
    cycle = 0;
    f0(i, N) cycle += i + 1;

    _count = 1;
    depth = 2;
    scanf("%d", &arr[0]);
    sum[0] = arr[0];

    f(i, 1, cycle){
        scanf("%d", &arr[i]);
        
        if(_count == 1){
            sum[i] = sum[i - depth + 1] + arr[i];
        } else if(_count == depth){
            sum[i] = sum[i - depth] + arr[i];
            depth++;
            _count = 1;
            continue;
        } else {
            sum[i] = max(sum[i-depth], sum[i-depth + 1]) + arr[i];
        }
        
        _count++;
    }
    sort(&sum[cycle - depth + 1], &sum[cycle], greater<int>());
    printf("%d", sum[cycle-depth + 1]);
}
