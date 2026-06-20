#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, pattern;

    getline(cin, text);
    getline(cin, pattern);

    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; i++) {
        int j = 0;

        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }

        if (j == m) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
