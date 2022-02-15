#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>


using namespace std;

int main(void) {
	int loop;
	int count = 0;
	cin >> loop;
	while (loop) {
		for (int j = 0; j < count; j++) {
			cout << ' ';
		}
		for (int i = 0; i < loop; i++) {
			cout << '*';
		}
		cout << '\n';
		loop--;
		count++;
	}

	return 0;
}