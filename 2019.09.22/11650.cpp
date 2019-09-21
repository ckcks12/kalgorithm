#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {        //cin.tie()를 이용해서 cin을 사용하면 시간초과가 뜸...
	int N, x, y;
	scanf("%d", &N);
	vector<pair<int, int>> vec(N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);
		vec[i] = { x, y };
	}
	sort(vec.begin(), vec.end());

	for (int i = 0; i < N; i++)
		printf("%d %d\n", vec[i].first, vec[i].second);
	return 0;
}