#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const char open = '(';
const char close = ')';

void calc(string &result, unsigned int length, unsigned int current_pos, unsigned int not_closed_cnt) {
    if (current_pos == length) {
        cout << result << endl;
        return;
    }

    if(length - not_closed_cnt > current_pos) {
        result[current_pos] = open;
        calc(result, length, current_pos + 1, not_closed_cnt + 1);
    }

    if (not_closed_cnt != 0) {
        result[current_pos] = close;
        calc(result, length, current_pos + 1, not_closed_cnt - 1);
    }
}

int main() {
    unsigned int length;
    cin >> length;
    if (length == 0) {
        return 0;
    }
    length *= 2;
    string result (length, ' ');
    calc(result, length, 0, 0);
    return 0;
}
