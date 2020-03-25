/* UVA374 Big Mod */

#include<iostream>

using namespace std;

int pow(int b,int exp, int m)
{
    if(exp == 0)
        return 1%m;
    if(exp == 1)
        return b%m;
    if(exp % 2 == 0)
        return pow(b*b % m, exp/2 ,m);
    else
        return b*pow(b, exp-1, m)%m;
}

int main()
{
    int b,p,m;
    while(cin>>b>>p>>m)
    {
        cout<<pow(b%m,p,m)<<endl;
    }
}