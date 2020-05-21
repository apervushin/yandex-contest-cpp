#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    int m;
    unsigned int current_length = 0, max_length = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m == 1) {
            ++current_length;
        } else {
            max_length = max(max_length, current_length);
            current_length = 0;
        }
    }
    max_length = max(max_length, current_length);

    cout << max_length;

    return 0;
}
