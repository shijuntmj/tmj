#include <iostream>
#define Inf 0x7FFFFFFF
using namespace std;
const int Max_Size = 510;

struct Node
{
    int dis,cost;
}G[Max_Size][Max_Size];
bool visited[Max_Size];
int dist[Max_Size],cost[Max_Size];
int N,M,s,d;

void BuildGraph();
void Dijkstra();
int FindMindist();

int main()
{
    cin >> N >> M >> s >> d;
    BuildGraph();
    Dijkstra();
    cout << dist[d] << " " << cost[d] << endl;
    system("pause");
    return 0;
}
void BuildGraph()
{
    for(int i = 0 ; i < N; i++)
    {
        for(int j = 0 ; j < N; j++)
        {
            G[i][j].dis = Inf;
            G[i][j].cost = Inf;
        }
        dist[i] = Inf;
        cost[i] = Inf;
        G[i][i].cost = 0;
        G[i][i].dis = 0;
    }
    for(int i = 0 ; i < M; i++)
    {
        int u,v,d,c;
        cin >> u >>v >> d >> c;
        G[u][v].cost = c;
        G[u][v].dis = d;
        G[v][u].cost = c;
        G[v][u].dis = d;
    }
}
int FindMindist()
{
    int Mindist = Inf,Minv;
    for(int i = 0 ; i < N ; i++)
    {
        if(!visited[i] && dist[i] < Mindist)
        {
            Mindist = dist[i];
            Minv = i;
        }
    }
    if(Mindist != Inf)
    {
        return Minv;
    }
    else
    {
        return -1;
    }
}
void Dijkstra()
{
    for(int i = 0 ; i < N; i++)
    {
        dist[i] = G[s][i].dis;
        cost[i] = G[s][i].cost;
    }
    dist[s] = 0;
    cost[s] = 0;
    visited[s] = true;
    while(1)
    {
        int v = FindMindist();
        if(v == -1)
        {
            break;
        }
        visited[v] = true;
        for(int i = 0 ; i < N; i++)
        {
            if(!visited[i] && G[v][i].dis != Inf && dist[v] + G[v][i].dis < dist[i])
            {
                dist[i] = dist[v] + G[v][i].dis;
                cost[i] = cost[v] + G[v][i].cost;
            }
            if(!visited[i] && G[v][i].dis != Inf && dist[v] + G[v][i].dis == dist[i] && cost[v] + G[v][i].cost < cost[i])
            {
                cost[i] = cost[v] + G[v][i].cost;
            }
        }
    }
}
