
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
	int Sum = 0;
	cin >> N;
	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].first >> v[i].second;
		Sum += v[i].second % v[i].first;
	}
	cout << Sum;
	
	return 0;
}