#include <iostream>
using namespace std;

int main() {
	int N;
	int X, Y;
	cin >> N;
	int score = 1;
	int *arr = new int[N];
	int *arr2 = new int[N];
	int i = 0;
	while (i != N) {
		cin >> X >> Y;
		arr[i] = X;
		arr2[i] = Y;
		i++;
	}
	int *sum = new int[N];
	for (int j = 0; j < N; j++) {
		for (int k = 0; k < N; k++) {
			if (arr[k] > arr[j])
				if (arr2[k] > arr2[j])
					score++;
		}
		cout << score << " ";
		score = 1;
	}
   return 0;
}
