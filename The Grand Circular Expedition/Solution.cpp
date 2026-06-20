#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string gasLine, costLine;

    getline(cin, gasLine);
    getline(cin, costLine);

    vector<int> gas, cost;
    int x;

    stringstream gasStream(gasLine);
    while (gasStream >> x) {
        gas.push_back(x);
    }

    stringstream costStream(costLine);
    while (costStream >> x) {
        cost.push_back(x);
    }

    int n = gas.size();

    long long totalTank = 0;
    long long currentTank = 0;
    int start = 0;

    for (int i = 0; i < n; i++) {
        int diff = gas[i] - cost[i];

        totalTank += diff;
        currentTank += diff;

        if (currentTank < 0) {
            start = i + 1;
            currentTank = 0;
        }
    }

    cout << (totalTank >= 0 ? start : -1);

    return 0;
}
