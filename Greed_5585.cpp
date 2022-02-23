#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	int k;
	int result = 0;
	cin >> k;
	int n = 1000 - k;
	result = ((n / 500) + ((n % 500) / 100) + (((n % 500) % 100) / 50) +
		((((n % 500) % 100) % 50) / 10) + (((((n % 500) % 100) % 50) % 10) / 5) +
		((((((n % 500) % 100) % 50) % 10) % 5) / 1));
	cout << result << endl;

	return 0;
}