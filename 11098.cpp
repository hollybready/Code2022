#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <cmath>
#include <vector>

using namespace std;

int main(void) {
    int Testcase;
    int m;
    cin >> Testcase;
    while (Testcase--) {
        int max=0;
        string max_name;
        cin >> m;
        vector<pair<int, string>> v(m);
        for (int i = 0; i < m; i++) {
            cin >> v[i].first >> v[i].second;
            if (max < v[i].first) {
                max = v[i].first;
                max_name = v[i].second;
            }
        }
        cout << max_name << '\n';
    }
    return 0;
}