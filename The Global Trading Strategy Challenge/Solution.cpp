#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <climits>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    vector<int> prices;
    stringstream ss(line);

    int x;
    while (ss >> x) {
        prices.push_back(x);
    }

    int buy1 = INT_MIN;
    int sell1 = 0;

    int buy2 = INT_MIN;
    int sell2 = 0;

    for (int price : prices) {
        buy1 = max(buy1, -price);
        sell1 = max(sell1, buy1 + price);

        buy2 = max(buy2, sell1 - price);
        sell2 = max(sell2, buy2 + price);
    }

    cout << sell2;

    return 0;
}
