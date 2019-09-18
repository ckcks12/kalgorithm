#include<iostream>
#include<vector>
using namespace std;
int N;
int digit(int N) {		//자리수 계산하는 함수
	int counting = 0;
	while (N >= 1) {
		counting++;
		N /= 10;
	}
	return counting;
}

int decomposition(int N) {		//
	int result = 0;
	while (N >= 1) {
		result += N % 10;
		N /= 10;
	}
	return result;
}

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int num = digit(N);
	for (int i = N - num * 9; i <= N; i++) {
		if (i + decomposition(i) == N) {
			cout << i << endl;
			return 0;
		}
	}
	cout << "0" << endl;
	return 0;
}
