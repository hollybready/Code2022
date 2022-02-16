
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
		int C_Sum = 0;
		double GPA=0;
		cin >> N;
		vector<pair<int, double>> v(N);
		for (int i = 0; i < N; i++) {
			cin >> v[i].first >> v[i].second;
			C_Sum = C_Sum + v[i].first;
			GPA = GPA + v[i].first * v[i].second;
		}
		GPA = round(((GPA / C_Sum) * 10))/ 10;
		cout << C_Sum << ' ' << GPA<< '\n';
	}
	return 0;
}
