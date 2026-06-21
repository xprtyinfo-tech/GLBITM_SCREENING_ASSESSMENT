#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    vector<int> citations;
    stringstream ss(line);

    int x;
    while (ss >> x) {
        citations.push_back(x);
    }

    sort(citations.begin(), citations.end(), greater<int>());

    int h = 0;

    for (int i = 0; i < (int)citations.size(); i++) {
        if (citations[i] >= i + 1)
            h = i + 1;
        else
            break;
    }

    cout << h;

    return 0;
}
