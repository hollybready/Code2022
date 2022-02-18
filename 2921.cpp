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
	int Sum=0;
	cin >> N;
	for (int i = 0; i < N+1; i++) {
		for (int j = 0; j < N+1; j++) {
			if (j >= i) { Sum += i+j; }
		}
	}
	cout << Sum << endl;

	return 0;
}