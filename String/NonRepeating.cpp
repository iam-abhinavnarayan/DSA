#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    const int MAX_CHAR = 26;

    char nonRepeatingChar(string &s) {
        vector<int> vis(MAX_CHAR, -1);

        for (int i = 0; i < s.length(); ++i) {
            int index = s[i] - 'a';
            if (vis[index] == -1) {
                // Store index when character is first seen
                vis[index] = i;
            } else {
                // Mark character as repeated
                vis[index] = -2;
            }
        }

        int idx = -1;

        // Find smallest index among non-repeating characters
        for (int i = 0; i < MAX_CHAR; ++i) {
            if (vis[i] >= 0 && (idx == -1 || vis[i] < vis[idx])) {
                idx = i;
            }
        }

        return (idx == -1) ? '$' : s[vis[idx]];
    }
};

int main() {
    string s;
    cin >> s;

    Solution obj;
    char result = obj.nonRepeatingChar(s);

    cout << result << endl;

    return 0;
}
