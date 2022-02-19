
#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	int count = 0;
	int N, K;
	cin >> N >> K;
	while (1) {
		if (N == 1) {
			break;
		}
		else if (N % K == 0) {
			N = N / K;
			count += 1;
		}
		else {
			N += (-1);
			count += 1;
		}
	}
	cout << count << endl;
	return 0;
}