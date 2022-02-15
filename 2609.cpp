
#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>


using namespace std;

int main(void) {
	int a, b;
	int Max_n=0, Min_n=0;
	cin >> a >> b;
	for (int i = 1; i <= a || i <= b; i++) {
		if (a % i == 0 && b % i == 0) {
			Max_n = i;
		}
	}
	Min_n = (a * b) / Max_n;
	cout << Max_n <<' '<< Min_n;
	return 0;
}