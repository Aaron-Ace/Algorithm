//Pie
//UVA12097

/*
題目描述：

現在有一些不同半徑的蛋糕，每個厚度都是 1，現在有 F 個朋友和自己要去分，
而每個人所得到的蛋糕塊的體積要一樣，但分的時候只能來自於一塊蛋糕，
不可由來自不同蛋糕的小蛋糕構成。

題目解法：

二分答案，然後去除每塊蛋糕取整數，得到該蛋糕可以分出幾份。
*/


#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cstdio>
#include<cmath>

using namespace std;
const int maxn = 10000 + 5;
const double pi = acos(-1.0); //数學中arccos(-1)=圆周率pi
int T;
int n, f;
int x;
double maxf;
double Pie[maxn];

bool judge(double area)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += floor(Pie[i] / area);
    return sum >= f + 1;
}

int main()
{
    cin >> T;
    while(T--)
    {
        maxf = -1.0;
        cin >> n >> f;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            Pie[i] = pi*x*x;
            maxf = max(maxf, Pie[i]);
        }
        double l = 0, r = maxf;
        while (r - l > 1e-4)
        {
            double mid = (r + l) / 2.0;
            if (judge(mid))l = mid;
            else r = mid;
        }
        printf("%.4f\n", l);
    }
    return 0;
}