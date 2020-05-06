#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int c, C;
int dat[10000], len[10000], pre[10000], n;
string line;

void init() {
    getline(cin, line);
    C = atoi(line.c_str());
    c = 0;
    getline(cin, line);
}

bool input() {
    if (c++ == C)
        return false;
    n = 0;
    while (getline(cin, line) && line != "")
        dat[n++] = atoi(line.c_str());
    return true;
}

void print(int idx) {
    if (pre[idx] != idx)
        print(pre[idx]);
    cout << dat[idx] << endl;
}

void run() {
    len[0] = 1;
    pre[0] = 0;
    int tidx = 0;
    for (int i = 1; i < n; ++i) {
        len[i] = 1;
        pre[i] = i;
        for (int j = i-1; j >= 0; --j) {
            if (dat[i] > dat[j] && len[i] < len[j] + 1) {
                len[i] = len[j] + 1;
                pre[i] = j;
            }
        }
        if (len[tidx] < len[i])
            tidx = i;
    }

    cout << "Max hits: " << len[tidx] << std::endl;
    print(tidx);
    if (c != C)
        cout << endl;
}

int main() {
    init();
    while (input())
        run();
    return 0;
}