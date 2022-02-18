
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
	cin >> N;
	int Sum=1-N;
	while (N--) {
		int P;
		cin >> P;
		Sum += P;
	}
	cout << Sum << endl;
	return 0;
}