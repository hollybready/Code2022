#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	int total;
	cin >> total;
	for (int i = 0; i < 9; i++) {
		int price;
		cin >> price;
		total = total - price;
	}
	cout << total;
}