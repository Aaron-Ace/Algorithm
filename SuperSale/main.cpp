//UVA10130
#include <iostream>

using namespace std;

int t, T;
struct Item
{
    int price, weight;
};

Item items[1000];
int nItem;

void init()
{
    cin >> T;
    t = 0;
}

int dp[1000 + 1][30 + 1];

bool input()
{
    if (t++ == T)
        return false;
    cin >> nItem;
    for (int i = 0; i < nItem; i++)
        cin >> items[i].price >> items[i].weight;

    for (int i = 0; i < nItem; i++)
    {
        for (int j = 0; j <= 30; j++)
            dp[i][j] = -1;
    }
    return true;
}


int knapsack(int weight, int n)
{
    if (n < 0)
        return 0;
    if (dp[n][weight] >= 0)
        return dp[n][weight];
    dp[n][weight] = knapsack(weight, n-1);
    if (weight >= items[n].weight &&
        items[n].price + knapsack(weight - items[n].weight, n-1) > dp[n][weight])
        dp[n][weight] = items[n].price + knapsack(weight - items[n].weight, n-1);
    return dp[n][weight];
}

void run()
{
    int nCustomer;
    cin >> nCustomer;
    int sum = 0, power;
    for (int i = 0; i < nCustomer; i++)
    {
        std::cin >> power;
        sum += knapsack(power, nItem - 1);
    }
    cout << sum << std::endl;
}

int main()
{
    init();
    while (input())
        run();
    return 0;
}