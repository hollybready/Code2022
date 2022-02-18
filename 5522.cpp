#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	int Sum = 0;
	for (int i = 0; i < 5; i++) {
		int N;
		cin >> N;
		Sum += N;
	}
	cout << Sum << endl;
}