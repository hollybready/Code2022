
#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int Triangle(int N) {
	int K = N;
	while (N) {
		for (int i = 0; i < K-N+1; i++) {
			cout << '*';
		}
		N--;
		cout << '\n';
	}
	return 0;
}

int Reverse_Triangle(int N) {
	while (N-1) {
		for (int i = 0; i < N-1; i++) {
			cout << '*';
		}
		N--;
		cout << '\n';
	}
	return 0;
}

int main(void) {
	int N;
	cin >> N;
	Triangle(N);
	Reverse_Triangle(N);
	return 0;
}