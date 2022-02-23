
#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		vector<int> Max_v(N);
		for (int i = 0; i < N; i++) {
			cin >> Max_v[i];
		}
		long long profit = 0;
		int Max_point = -1;
		for (int i = N - 1; i >= 0; i--) {
			Max_point = max(Max_point, Max_v[i]);
			profit += (long long)(Max_point - Max_v[i]); }

		cout << profit << endl;
	}
	return 0;
}