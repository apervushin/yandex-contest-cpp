#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    unsigned int k, n, val;
    cin >> k;
    vector<unsigned char> vector;

    for (unsigned int i {0}; i < k; i++) {
        cin >> n;
        for (unsigned int j {0}; j < n; j++) {
            cin >> val;
            vector.push_back(val);
            push_heap(vector.begin(), vector.end(), greater<>());
        }
    }

    while (!vector.empty()) {
        cout << (unsigned int)vector.front() << " ";
        pop_heap(vector.begin(), vector.end(), greater<>());
        vector.pop_back();
    }
    cout << endl;

    return 0;
}