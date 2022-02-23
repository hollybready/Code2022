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
	int count = 0;
	int min_point = 20000;
	cin >> T;
	vector<int> stage(T);
	for (int i = 0; i < T; i++) {
		cin >> stage[i];
	}
	for (int i = T - 1; i >= 0; i--) {
		min_point=min(min_point, stage[i]);
		count += stage[i] - min_point;
		min_point -= 1;
	}
	cout << count << endl;

	return 0;
}