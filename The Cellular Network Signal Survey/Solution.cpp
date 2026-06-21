#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    vector<int> nums;
    stringstream ss(line);

    int x;
    while (ss >> x) {
        nums.push_back(x);
    }

    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] < nums[mid + 1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    cout << left;

    return 0;
}
