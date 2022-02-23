#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	string T;
	int count = 0;
	cin >> T;
	for (int i = 0; i < T.length(); i++) {
		if (T[i] != T[i + 1]) { count++; }
	}
	cout << count/2 << endl;

	return 0;
}