
#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int piramid(int N) {
	int count = 0;
	while (N) {
		for (int i = 1; i < N; i++) {
			cout << ' ';
		}
		for (int j = 0; j < (count * 2) + 1; j++) {
			cout << '*';
		}
		N--;
		count++;
		cout << '\n';
	}
	return 0;
}

int reverse_piramid(int N) {
	int count = 1;
	while (N-1) {
		for (int k = 0; k < count; k++) {
			cout << ' ';
		}
		for (int l = 0; l < (2 * (N-1)) - 1; l++) {
			cout << '*';
		}
		N--;
		count++;
		cout << '\n';
	}
	return 0;
}

int main(void) {
	int N;
	cin >> N;
	piramid(N);
	reverse_piramid(N);
	return 0;
}
