#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool is_zero_filled(vector<int> chars) {
    for (const auto i : chars) {
        if (i != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> chars (26, 0);
    char c;
    bool fill = true;
    while (!cin.eof()) {
        cin.get(c);
        if (c == '\n') {
            if (!fill) {
                break;
            }
            fill = false;
            continue;
        }
        if (fill) {
            chars[c - 'a']++;
        } else {
            chars[c - 'a']--;
        }
    };
    cout << is_zero_filled(chars);
    return 0;
}