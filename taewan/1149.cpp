#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int arr[1001][4] = { 0, };
	for (int i = 1; i <= N; i++) {
		cin >> arr[i][1] >> arr[i][2] >> arr[i][3];
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= 3; j++) {
			if (j == 1) 
				arr[i][j] += min(arr[i - 1][j + 1], arr[i - 1][j + 2]);
			else if (j == 2) 
				arr[i][j] += min(arr[i - 1][j - 1], arr[i - 1][j + 1]);
			else if (j == 3) 
				arr[i][j] += min(arr[i - 1][j - 2], arr[i - 1][j - 1]);
		}
	}

	int result = min(arr[N][1], min(arr[N][2], arr[N][3]));
	cout << result << endl;
	system("pause");
	return 0;
}
