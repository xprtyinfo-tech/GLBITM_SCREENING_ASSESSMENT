#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    if (line.empty()) {
        cout << 0;
        return 0;
    }

    vector<int> heights;
    stringstream ss(line);
    int x;

    while (ss >> x) {
        heights.push_back(x);
    }

    stack<int> st;
    long long maxArea = 0;
    int n = heights.size();

    for (int i = 0; i <= n; i++) {
        int currHeight = (i == n) ? 0 : heights[i];

        while (!st.empty() && heights[st.top()] > currHeight) {
            int height = heights[st.top()];
            st.pop();

            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, 1LL * height * width);
        }

        st.push(i);
    }

    cout << maxArea;
    return 0;
}
