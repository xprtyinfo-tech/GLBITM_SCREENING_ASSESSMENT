#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main() {
    vector<vector<int>> matrix;
    string line;

    while (getline(cin, line)) {
        if (line.empty()) continue;

        stringstream ss(line);
        vector<int> row;
        int num;

        while (ss >> num) {
            row.push_back(num);
        }

        if (!row.empty()) {
            matrix.push_back(row);
        }
    }

    if (matrix.empty()) {
        return 0;
    }

    int rows = matrix.size();
    int cols = matrix[0].size();

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    vector<int> result;

    while (top <= bottom && left <= right) {

        for (int j = left; j <= right; j++)
            result.push_back(matrix[top][j]);
        top++;

        for (int i = top; i <= bottom; i++)
            result.push_back(matrix[i][right]);
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                result.push_back(matrix[bottom][j]);
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                result.push_back(matrix[i][left]);
            left++;
        }
    }

    for (size_t i = 0; i < result.size(); i++) {
        if (i > 0) cout << " ";
        cout << result[i];
    }

    return 0;
}
