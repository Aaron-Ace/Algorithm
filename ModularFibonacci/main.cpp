//[UVA][¯x°}] 10229 - Modular Fibonacci
#include <iostream>

using namespace std;

struct M
{
    long long v[2][2];
} I = {1,0,0,1}, o = {0,0,0,0}, A = {1,1,1,0};

void mult(M &a, M &b, int m)
{
    int i, j, k;
    M t = o;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 2; k++)
            {
                t.v[i][j] += (a.v[i][k]*b.v[k][j]);
                t.v[i][j] %= (1<<m);
            }
        }
    }
    a = t;
}

void calc(int n, int m)
{
    M x = I, y = A;
    while(n)
    {
        if(n&1)
            mult(x, y, m);
        mult(y, y, m);
        n /= 2;
    }
    cout<<x.v[0][2]<<endl;
}

int main()
{
    int n, m;
    while(cin>>n>>m)
        calc(n, m);
    return 0;
}