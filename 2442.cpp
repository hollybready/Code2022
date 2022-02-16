
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
	int count = N;
	int count2 = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 1; j < count; j++) {
			cout << ' ';
		}
		for (int k = 0; k < (2 * count2) + 1; k++) {
			cout << '*';
		}
		count--;
		count2++;
		cout << '\n';
	}
	return 0;
}