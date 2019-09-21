#include<iostream>
#include<queue>
using namespace std;
int N;
int make_one() {
	queue<pair<int, int>> q;
	q.push({ N , 0});
	while (1) {
		int first = q.front().first;
		int second = q.front().second;
		if (first == 1)
			return second;
		q.pop();
		if (first % 3 == 0) 
			q.push({ first / 3, second + 1 });
		if (first % 2 == 0)
			q.push({ first / 2, second + 1 });
		q.push({ first - 1, second + 1 });
	}
}

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N;
	cout << make_one() << endl;
	system("pause");
	return 0;
}
