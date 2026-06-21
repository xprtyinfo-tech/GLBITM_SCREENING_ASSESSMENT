#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    vector<int> cost;
    stringstream ss(line);

    int x;
    while (ss >> x) {
        cost.push_back(x);
    }

    int n = cost.size();

    int prev2 = cost[0];
    int prev1 = cost[1];

    for (int i = 2; i < n; i++) {
        int curr = cost[i] + min(prev1, prev2);
        prev2 = prev1;
        prev1 = curr;
    }

    cout << min(prev1, prev2);

    return 0;
}
