
#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int Top_and_Middle(int N) {
	int count = N;
	while (count--) {
		for (int i = 0; i < 2 * N; i++) {
			if (i>=N+count || i<N-count) {
				cout << '*';
			}
			else { cout << ' '; }
		}
		cout << '\n';
	}
	return 0;
}

int Bottom(int N) {
	int count = N-1;
	while (count--) {
		for (int i = 0; i < 2 * N; i++) {
			if (i<count+1 || i>=(2*N)-(count+1)) {
				cout << '*';
			}
			else { cout << ' '; }
		}
		cout << '\n';
	}
	return 0;
}



int main(void) {
	int N;
	cin >> N;
	Top_and_Middle(N);
	Bottom(N);
	return 0;
}