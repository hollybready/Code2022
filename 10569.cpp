
#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	int T;
	cin >> T;
	while (T--) {
		int V, E;
		cin >> V >> E;
		cout << 2-V+E<<endl;
	}
	return 0;
}