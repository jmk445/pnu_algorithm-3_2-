#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX = 20;
const int INF = 987654321;

vector<pair<int, int>> adj[MAX + 1];

vector<int> dijkstra1(int start, int n)
{
    vector<int> distance(n + 1, INF);
    priority_queue<pair<int, int>> pq;

    distance[start] = 0;
    pq.push({ 0, start });

    while (!pq.empty())
    {
        int curr = pq.top().second;
        int cost = -pq.top().first;
        pq.pop();

        if (distance[curr] < cost)
            continue;

        for (auto& next : adj[curr])
        {
            int nextNode = next.first;
            int nextCost = cost + next.second;

            if (distance[nextNode] > nextCost)
            {
                distance[nextNode] = nextCost;
                pq.push({ -nextCost, nextNode });
            }
        }
    }

    return distance;
}

int main()
{
    int n, c1, c2;
    cin >> n >> c1 >> c2;

    for (int i = 1; i <= n - 1; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;

        adj[a].push_back({ b, w });
        adj[b].push_back({ a, w });
    }

    vector<int> distFromC1 = dijkstra1(c1, n);
    vector<int> distFromC2 = dijkstra1(c2, n);

    vector<pair<int, int>> order;
    for (int i = 1; i <= n; i++)
    {
        if (i != c1 && i != c2)
            order.push_back({ min(distFromC1[i], distFromC2[i]), i });
    }

    sort(order.begin(), order.end());

    for (auto& elem : order)
    {
        cout << elem.second << endl;
    }

    return 0;
}