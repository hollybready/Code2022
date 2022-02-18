
#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	int Testcase;
	int X = 1;
	cin >> Testcase;
	while (Testcase--) {
		int n1, n2;
		cin >> n1 >> n2;
		cout << "Case "<< X<<": "<<n1+n2<<endl;
		X++;
	}
}