//Pie
//UVA12097

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
//	system("pause");
    return 0;
}