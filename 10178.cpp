
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
	cin >> Testcase;
	while (Testcase--) {
		int c, v;
		cin >> c >> v;
		cout << "You get "<< c/v<<" piece(s) and your dad gets "<<c%v<<" piece(s)."<<endl;
	}
}