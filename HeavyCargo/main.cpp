#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<map>
#include<algorithm>
#define INF 1e9
using namespace std;
const int maxn = 200+10;
int d[maxn][maxn];
int n,m;
void floyd()
{
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(d[i][k]>0 && d[k][j]>0)
                    d[i][j] = max(d[i][j],min(d[i][k],d[k][j]));
}
int cnt;
map<string,int> mp;
int ID(string s)
{
    if(mp.find(s)==mp.end())
        mp[s]=++cnt;
    return mp[s];
}
int main()
{
    int kase=0;
    while(scanf("%d%d",&n,&m)==2&&n&&m)
    {
        cnt=0;
        mp.clear();
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                d[i][j] = i==j? INF:0;//0表示此路不通，無法負重
        while(m--)
        {
            string s1,s2;
            int weight;
            cin>>s1>>s2>>weight;
            int u = ID(s1),v=ID(s2);
            d[u][v]=d[v][u]=max(d[u][v], weight);
        }

        floyd();
        string s1,s2;
        cin>>s1>>s2;
        int u = ID(s1),v=ID(s2);
        printf("Scenario #%d\n",++kase);
        printf("%d tons\n\n",d[u][v]);
    }
    return 0;
}