#include <iostream>

using namespace std;

int c, C;
int n, m, E[2000][3];

const int INF = 99999999;

void init()
{
    cin >> C;
    c = 0;
}

bool input()
{
    if (c++ == C)
        return false;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
        cin >> E[i][0] >> E[i][1] >> E[i][2];
    return true;
}

bool negativeCycle()
{
    int dp[n];
    // start at vertex 0, so dp[0] => 0, otherwise => INF
    dp[0] = 0;
    for (int i = 1; i < n; i++)
        dp[i] = INF;
    // Bellman-Ford algorithm
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < m; ++j)
            if (dp[E[j][0]] != INF && dp[E[j][1]] > dp[E[j][0]] + E[j][2])
                dp[E[j][1]] = dp[E[j][0]] + E[j][2];
    // Check negative cycle
    for (int i = 0; i < m; ++i)
        if (dp[E[i][0]] + E[i][2] < dp[E[i][1]])
            return true;
    return false;
}

int main()
{
    init();
    while (input())
        cout << (negativeCycle()?"possible":"not possible") << endl;
    return 0;
}