#include <iostream>
using namespace std;
int main()
{

	int num, sum;
	int count = 0;
	cin >> num;
	int number = num;
	sum = num;
	while (num != 0) {
		num = num / 10;
		count++;
	}
	number -= 9 * count;
	int i = 1;
	while (i != 9*count) {
		int als = 0;
		number += 1;
		int number2 = number;

		als += number2;
		while (number2 != 0) {
			als += number2 % 10;
			number2 /= 10;
		}
		if (als == sum) {
			cout << number;
			return 0;
		}
		i++;
	}
	cout << 0;
	return 0;
}
