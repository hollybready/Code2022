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
	cin >> loop;
	while (loop) {
		for (int i = 0; i < loop; i++) {
			cout << '*';
		}
		cout << '\n';
		loop--;
	}

	return 0;
}