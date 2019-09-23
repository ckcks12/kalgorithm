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

ll arr[101];
ll print[101];

ll fib(int num){
    ll result;

    if(arr[num-1] != 0) return arr[num-1];
    else{
        result = fib(num-1) + fib(num - 5);
    }
    arr[num - 1] = result; 
    return result;
}

int main(){
    init(arr, 0);

    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 2;
    arr[4] = 2;

    int count = 0;
    input(n); 
    
    while(n != count){
        input(num);

        print[count] = fib(num);
        count++;
    }
    f0(i, count)
        printf("%lld\n", print[i]);
    return 0;    
}
