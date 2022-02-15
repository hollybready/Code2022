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
	unsigned long long int answer = 1;
	unsigned long long int oldanswer = 1;
	cin >> n;
	for (int i = 0; i < n-2; i++) {
			unsigned long long int temp;
			temp= answer;
			answer = answer + oldanswer;
			oldanswer = temp;
	}
	cout << answer; 
}