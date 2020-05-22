#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    unsigned int n;
    long current, prev = LONG_MIN;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> current;
        if (current != prev) {
            cout << current << endl;
        }
        prev = current;
    }

    return 0;
}