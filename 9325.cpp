
#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;


int main(void) {
	int Testcase;
	cin >> Testcase;
	while (Testcase--) {
		int n,s;
		cin >> s;
		cin >> n;
		vector<pair<int, int>> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].first >> v[i].second;
			s += (v[i].first * v[i].second);
		}
		cout << s << endl;
	}
	return 0;
}