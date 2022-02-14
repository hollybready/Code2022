#include <stdio.h>
#include <iostream>
#include <string.h> 
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(void) {
        int m;
        cin >> m;
        vector<pair< pair<int, int>, pair<int, string>> > v(m);
        for (int i = 0; i < m; i++) {
            cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first;
        }
        sort(v.begin(), v.end());

        cout << v[m - 1].second.second << '\n';
        cout << v[0].second.second << '\n';
    return 0;
}