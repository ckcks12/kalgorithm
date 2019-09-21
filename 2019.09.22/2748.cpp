#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	vector<long long> vec;
	vec.emplace_back(0);
	vec.emplace_back(1);
	for (int i = 2; i <= N; i++) 
		vec.push_back(vec[i - 1] + vec[i - 2]);
	cout << vec[N] << endl;
	system("pause");
	return 0;
}
