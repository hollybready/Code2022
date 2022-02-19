
#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	int a = n / 500;
	int b = (n % 500) / 100;
	int c = ((n % 500) % 100) / 50;
	int d = (((n % 500) % 100) % 50) / 10;
	cout << a + b + c + d;
	return 0;
}