#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int v, cost;
    node() {}
    node(int vv, int cc)
    {
        v = vv;
        cost = cc;
    }
};
bool operator<(node a, node b)
{
    return a.cost > b.cost;
}
bool operator>(node a, node b)
{
    return a.cost < b.cost;
}
int adj[100][100];
bool visited[100] = {false};
class prims
{
public:
    int vertex, edge, u, v, weight, i, j, ans = 0;
    void input()
    {
        cout << "Enter number of Nodes and edges: ";
        cin >> vertex >> edge;
        for (i = 0; i < edge; i++)
        {
            cin >> u >> v;
            cout << "Enter weight of edge from " << u << " to " << v << " : ";
            cin >> weight;
            adj[u][v] = weight;
            adj[v][u] = weight;
        }
    }

    void calculate()
    {
        priority_queue<node> pq;
        pq.push(node(0, 0));

        while (!pq.empty())
        {
            node tmp = pq.top();
            pq.pop();

            if (visited[tmp.v] == 1)
            {
                continue;
            }
            visited[tmp.v] = 1;
            ans += tmp.cost;

            for (i = 0; i < vertex; i++)
            {
                if (visited[i] == 1)
                {
                    continue;
                }
                if (adj[tmp.v][i] != 0)
                {
                    pq.push(node(i, adj[tmp.v][i]));
                }
            }
        }
        cout << "Minimum cost: " << ans;
    }
};
int main()
{
    prims ob;
    ob.input();
    ob.calculate();
    return 0;
}
/*
Input:
5 7
0 1 6
0 2 1
1 2 2
1 3 3
1 4 1
2 3 8
3 4 6
*/