#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	int N;
	int Max_W = 0;
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int j = 1; j <= N; j++) {
		if (v[N-j] * j > Max_W) { Max_W = v[N - j] * j; }
	}
	cout << Max_W << endl;
	
	return 0;
}
