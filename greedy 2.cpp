#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	int N,M,K;
	int BigNumber=0;
	int secondBigNumber=0;
	cin >> N >> M >> K;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
		if (v[i] > BigNumber) {
			int temp = BigNumber;
			BigNumber = v[i];
			secondBigNumber = temp;
		}
		else if (v[i] == BigNumber) {
			secondBigNumber = BigNumber;
		}
	}
	
	cout << (BigNumber * K) * (M / K) + (secondBigNumber * (M % K)) << endl;
	return 0;
}