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
	cin >> N;
	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].second >> v[i].first;
	}
	sort(v.begin(),v.end());
	int meeting = v[0].first;
	int count = 1;
	for (int i = 1; i < N; i++) {
		if (v[i].second >= meeting) {
			meeting = v[i].first;
			count += 1;
		}
	}
	cout << count << endl;
	return 0;
}