#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
int ekq = 0;
vector<int> vec;

void blcjack(int card, int count, int sum) {
	if (count == 3 && sum <= M) {
		ekq = max(ekq, sum);
		return;
	}

	if (sum > M || card >= N || count > 3)
		return;

	blcjack(card + 1, count + 1, sum + vec[card]);
	blcjack(card + 1, count, sum);
}
int main() {

	cin >> N >> M;
	vec = vector<int>(N);

	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}
	blcjack(0, 0, 0);
	cout << ekq << endl;

	return 0;
}
