// UVa 10261 - Ferry Loading

/*
題意
現有一個雙空間的貨艙，有一列必須要依次放入貨艙的車子，請算出最大的載量且輸出放置位子。
*/


#include<iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {

    int t;
    for (cin>>t; t; t--) {
        int n;
        cin>>n;
        n *= 100;
        int T[10001], c[202];
        bool R[202][10001];
        memset(R, false, sizeof(R));
        memset(T, 255, sizeof(T));
        int oo = T[0];
        T[0] = 0;
        int j, sum = 0;
        unsigned long long int i = 0;
        cin>>j;
        int s = 0, sol = 0;
        bool yet = true;
        while (j) {
            i++;
            if (yet && sum + j <= n * 2) {
                sum += j;
                c[i] = j;
                for (int k = n - j; k >= 0; k--)
                    if (T[k] != oo && sum - (k + j) <= n) {
                        T[k + j] = i;
                        R[i][k + j] = true;
                        s = k + j;
                        sol = i;
                    }
            } else
                yet = false;
            cin>>j;
        }
        bool left[202];
        memset(left, false, sizeof(left));
        for (int i = sol; i >= 0; i--) {
            if (R[i][s]) {
                left[i] = true;
                s -= c[i];
            }
        }
        cout<<sol<<endl;
        for (int i = 1; i <= sol; i++)
            printf("%s\n", left[i] ? "port" : "starboard");
        if (t > 1)
            cout<<endl;
    }

    return 0;
}