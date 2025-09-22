#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> nums;

    for (char ch : s) {
        if (isdigit(ch)) {
            nums.push_back(ch - '0');
        }
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        if (i > 0) cout << "+";
        cout << nums[i];
    }

    return 0;
}
