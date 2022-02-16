
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
	int count = 0;
	cin >> N;
	while (N) {
		for (int k = 0; k < count; k++) {
			cout << ' ';
		}
		for (int i = 0; i < (2*N) - 1;  i++) {
			cout << '*';
		}
		N--;
		count++;
		cout << '\n';
	}
	return 0;
}