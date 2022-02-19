#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	int M,N;
	cin >> M >> N;
	int Max_Number = 0;
	int chosen_Number = 10000;

	while (N--) {
		vector<int> v(M);
		int chosen_Number = 10000;
		for (int i = 0; i < M; i++) {
			cin >> v[i];
			if (v[i] < chosen_Number) {
				chosen_Number = v[i];
			}
		}
		if (chosen_Number > Max_Number) {
			Max_Number = chosen_Number;
		}
		v.clear();
	}

	cout << Max_Number << endl;

	return 0;
}