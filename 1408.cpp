
#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>


using namespace std;

int main(void) {
	string a, b;
	cin >> a >> b;
	int h1 = atoi(&a[0]);
	int m1 = atoi(&a[3]);
	int s1 = atoi(&a[6]);
	int h2 = atoi(&b[0]);
	int m2 = atoi(&b[3]);
	int s2 = atoi(&b[6]);

	int time1 = h1 * 3600 + m1 * 60 + s1;
	int time2 = h2 * 3600 + m2 * 60 + s2;

	if (time2 >= time1) {
		int time3 = time2 - time1;
		int h3 = time3 / 3600;
		int m3 = (time3 % 3600) / 60;
		int s3 = (time3 % 3600) % 60;
		printf("%02d:%02d:%02d", h3, m3, s3);
	}
	else {
		int time3 = 86400 - (time1 - time2);
		int h3 = time3 / 3600;
		int m3 = (time3 % 3600) / 60;
		int s3 = (time3 % 3600) % 60;
		printf("%02d:%02d:%02d", h3, m3, s3);
	}

	return 0;
}