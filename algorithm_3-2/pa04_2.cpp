
//내가 풀다가 안되서 승호한테 받아서 풀었음 -> pa04가 답

#include<iostream>
#include<vector>
#include<queue>
#define INF 1e9
using namespace std;






int main() {
	int N, c1, c2 = 0;
	cin >> N >> c1 >> c2;

	vector <vector < int> > graph;

	for (int i = 0; i < N - 1; i++) {
		vector<int> edge;
		for (int j = 0; j < 3; j++) {
			int temp = 0;
			cin >> temp;
			edge.push_back(temp);
		}
		graph.push_back(edge);
	}/*
	for (int i = 0; i < N-1 ; i++) {
		for (int j = 0; j < 3; j++) {
			cout << graph.at(i).at(j) << endl;
		}
	}*/
	



}



int main()
{
    int V, E;    
    cin >> V;
    E = V - 1;
    int c1,c2;
    cin >> c1 >> c2;
    vector <pair<int, int> > arr[9];

    for (int i = 0; i < E; i++) {
        int from, to, val;
        scanf("%d %d %d", &from, &to, &val); //그래프 상의 엣지들에 대한 정보를 입력받습니다. 
        arr[from].push_back({ to,val });
    }
    int dist[9 + 1];    //최단거리를 갱신해주는 배열입니다. 
    fill(dist, dist + V + 1, INF);    //먼저 무한대로 전부 초기화를 시켜둡니다. 
    priority_queue<pair<int, int> > qu;

    qu.push({ 0,c1 });    //우선순위 큐에 시작점을 넣어줍니다. 
    dist[c1] = 0;    //시작점의 최단거리를 갱신합니다. 

    while (!qu.empty()) {
        int cost = -qu.top().first;    // cost는 다음 방문할 점의 dist값을 뜻합니다. 
        int here = qu.top().second;     // here을 방문할 점의 번호를 뜻합니다 

        qu.pop();

        for (int i = 0; i < arr[here].size(); i++) {
            int next = arr[here][i].first;
            int nextcost = arr[here][i].second;

            if (dist[next] > dist[here] + nextcost) {
                //현재 next에 저장된 dist의값보다 현재의 점을 거쳐서 갈 경우가 
                // 거리가 더짧으면 갱신해 주고 큐에 넣습니다. 
                dist[next] = dist[here] + nextcost;
                qu.push({ -dist[next],next });
            }
        }

    }
    for (int i = 1; i <= V; i++) {
        printf("%d\n", dist[i]);
    }
}
