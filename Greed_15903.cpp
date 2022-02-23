#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void) {
	int n, m;
	long long result = 0;
	cin >> n >> m;
	vector<long long> number(n);
	for (int i = 0; i < n; i++) { cin >> number[i]; }

	while (m--) {
		sort(number.begin(), number.end());
		long long sum = number[0] + number[1];
		number[0] = sum;
		number[1] = sum;
	}

	for (int i = 0; i < n; i++) { result += number[i]; }
	cout << result << endl;

	return 0;
}