#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int Top_Hourglass(int N) {
	int count = 0;
	while (N--) {
		for (int j = 0; j < count; j++) { cout << ' '; }
		for (int i = 0; i < (2 * N)+1; i++) { cout << '*'; }
		cout << '\n';
		count++;
	}
	return 0;
}

int Bottom_Hourglass(int N) {
	int count = N;
	while (N--) {
		for (int j = 0; j < N; j++) { cout << ' '; }
		for (int i = 0; i < (2 * (count-N)) + 1; i++) { cout << '*'; }
		cout << '\n';
	}
	return 0;
}

int main(void) {
	int N;
	cin >> N;
	Top_Hourglass(N);
	Bottom_Hourglass(N-1);
	return 0;
}