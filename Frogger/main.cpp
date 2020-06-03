#include<iostream>
#include<stdio.h>
#include<math.h>
#define MAX 200
class Point
{
    public:
        int x;
        int y;
};
double dis[MAX][MAX];
double min(double a,double b)
{
    if (a<b) return a;
    else return b;
}
double max(double a,double b)
{
    if (a<b) return b;
    else return a;
}
Point p[MAX];
using namespace std;
int main()
{
    int n,count=1;
    while((cin >> n)&&(n!=0))
    {
        for(int i=0;i<n;i++)
        {
            cin >> p[i].x >> p[i].y;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                dis[i][j]=sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y));
            }
        }
        for(int k=0;k<n;k++){//Floyd Warshall
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){ //找dis[i][k]與dis[k][j]中較大，但卻比dis[i][j]小
                    dis[i][j]=min(dis[i][j],max(dis[i][k],dis[k][j]));
                }
            }
        }
        cout <<"Scenario #" <<count<<endl;
        count++;
        printf("Frog Distance = %.3lf\n\n",dis[0][1]);
    }
}