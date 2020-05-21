#include <iostream>
using namespace std;

int main() {
    string j, s;
    cin >> j >> s;

    unsigned int result = 0;
    for (const char c : s) {
        result += j.find(c) != string::npos;
    }

    cout << result;

    return 0;
}
