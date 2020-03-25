//UVA10229

#include <iostream>
//0 ? n ? 2147483647
//0?m<20
using namespace std;

int fib[2000000];
int main(void) {
    int m, n;
    while (cin>>n>>m)
    {
        if (!m)
            printf("0\n");
        else {
            fib[0] = 0;
            fib[1] = 1;
            int k =  1 << m;
            int len = 3 * (1 << m - 1);
            for (int j = 2; j < len; j++)
                fib[j] = ((fib[j - 1]) % k + (fib[j - 2]) % k) % k;
            printf("%d\n", fib[n % len]);
        }
    }
    return 0;

}