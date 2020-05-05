//UVA10739-StringtoPalindrome

/*
題意：

問題是，給一個字串，問最少要做多少 1.插入 2.刪除 3.替換 動作才行把這個字串變成回文

 

解法：

用dp[i][j] 表示 位置i到j最少需要用多少指令才行變成回文

所以是

dp[i][j] = dp[i+1][j-1] , str[i]==str[j]

dp[i][j] = MIN (dp[i+1][j-1],dp[i+1][j],dp[i][j-1])+1 , str[i]!=str[j]
*/

#include<iostream>
#include <string.h>

using namespace std;

const int N = 1005;
int min(int a, int b) { return a < b ? a : b; }

int len, dp[N][N];
char str[N];

void solve() {
    len = strlen(str);
    memset(dp, 0, sizeof(dp));
    for (int i = len - 1; i >= 0; i--) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] == str[j])
                dp[i][j] = dp[i + 1][j - 1];
            else
                dp[i][j] = min( min(dp[i + 1][j], dp[i][j - 1]), dp[i + 1][j - 1]) + 1;
        }
    }
}

int main()
{
    int cas, t = 1;
    cin>>cas;
    while (cas--) {
        cin>>str;
        solve();
        cout<<"Case "<<t++<<": "<<dp[0][len - 1]<<endl;
    }
    return 0;
}