#include <iostream>

using namespace std;

int k, S[49], G[6];
int t; // test case

void init()
{
    t = 0;
}

bool input()
{
    cin >> k;
    if (k == 0)
        return false;
    t++;
    for (int i = 0; i < k; i++)
        cin >> S[i];
    return true;
}

void backtrack(int cur = 0)
{
    // get an answer, print out the answer and return
    if (cur == 6)
    {
        for (int i = 0; i < 6; i++)
            cout << G[i] << ((i == 5)?"\n":" ");
        return;
    }
    // try using each candidate
    for (int i = 0; i < k; i++)
    {
        // ignoring illegal candidates
        // since we will output games lexicographically
        // we only output the ascending order
        // thus, last added item should not smaller than previous item
        if (cur > 0 && S[i] <= G[cur - 1])
            continue;
        // setup the candidate to answer set, and try next step
        G[cur] = S[i];
        backtrack(cur + 1);
    }
}

int main() {
    init();
    while (input()) {
        // append blank line to previous test case
        if (t != 1)
            cout << std::endl;
        backtrack();
    }
    return 0;
}