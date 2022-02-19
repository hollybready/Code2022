#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	int N, K;
	int count = 0;
	cin >> N >> K;
	vector<int> v(N);
	for (int i = 1; i < N+1; i++) {
		cin >> v[N-i];
	}
	for (int i = 0; i < N; i++) {
		count += K / v[i];
		K = K % v[i];
	}
	cout << count << endl;
	return 0;
}