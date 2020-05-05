//UVA 515-King

/*
題目大意：

　　給定一個序列的長度，然後給定若干關係：這個關係是子序列各個元素之和與某個給定整數的大小關係。要求是否存在這樣一個序列滿足所有給定的若干關係。

本題主要就是需要想到利用前n個元素的和為替代，即設s[i] = a[1] + a[2] + …a[i]。

則a[si] + a[si+1] + … + a[si + ni] = s[si + ni] - s[si - 1]；所以如果a[si] + a[si+1] + … + a[si + ni] < k 則 s[si + ni] - s[si - 1] < k <= k - 1；如果a[si] + a[si+1] + … + a[si + ni] > k 則 s[si - 1] - s[si + ni] < -k <= -k - 1；

*/
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <queue>

using namespace std;

const int MAX_N = 200 + 10;
int head[MAX_N],d[MAX_N],cnt[MAX_N],vis[MAX_N];
const int INF = (1 << 30);
struct Edge
{
    int v, w, next;
};
Edge edge[MAX_N];
int n, m, _count;
void addEdge(int u, int v, int w)
{
    edge[_count].v = v;
    edge[_count].w = w;
    edge[_count].next = head[u];
    head[u] = _count++;
}
bool SPFA()
{
    memset(vis,0,sizeof(vis));
    memset(cnt,0,sizeof(cnt));
    for(int i = 0;i <= n;i++)
        d[i] = INF;
    d[n + 1] = 0;
    queue<int> Q;
    Q.push(n + 1);
    cnt[n + 1]++;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        vis[u] = false;
        for(int e = head[u]; e != -1; e = edge[e].next)
        {
            if(d[edge[e].v] > d[u] + edge[e].w)
            {
                d[edge[e].v] = d[u] + edge[e].w;
                if(!vis[edge[e].v])
                {
                    Q.push(edge[e].v);
                    vis[edge[e].v] = true;
                    cnt[edge[e].v]++;
                    if(cnt[edge[e].v] >= n + 2)// 0 ~ n + 1 共有n + 2個點
                        return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    while(scanf("%d", &n), n)
    {
        scanf("%d", &m);
        int s, len, k;
        char str[10];
        _count = 0;
        memset(head, -1, sizeof(head));
        for(int i = 0; i <= n; i++)
            addEdge(n + 1, i, 0);//添加從n + 1 到所有點的路徑，設置邊權為0
        for(int i = 1; i <= m; i++)
        {
            scanf("%d%d%s%d", &s, &len, str, &k);
            if(str[0] == 'g')//將大於轉換為小於等於
                addEdge(s + len, s - 1, -k - 1);
            else//將小於轉化為小於等於
                addEdge(s - 1, s + len, k - 1);
        }
        if(!SPFA())
            printf("successful conspiracy\n");
        else
            printf("lamentable kingdom\n");
    }
    return 0;
}
