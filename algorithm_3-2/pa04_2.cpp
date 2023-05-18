
//���� Ǯ�ٰ� �ȵǼ� ��ȣ���� �޾Ƽ� Ǯ���� -> pa04�� ��

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
        scanf("%d %d %d", &from, &to, &val); //�׷��� ���� �����鿡 ���� ������ �Է¹޽��ϴ�. 
        arr[from].push_back({ to,val });
    }
    int dist[9 + 1];    //�ִܰŸ��� �������ִ� �迭�Դϴ�. 
    fill(dist, dist + V + 1, INF);    //���� ���Ѵ�� ���� �ʱ�ȭ�� ���ѵӴϴ�. 
    priority_queue<pair<int, int> > qu;

    qu.push({ 0,c1 });    //�켱���� ť�� �������� �־��ݴϴ�. 
    dist[c1] = 0;    //�������� �ִܰŸ��� �����մϴ�. 

    while (!qu.empty()) {
        int cost = -qu.top().first;    // cost�� ���� �湮�� ���� dist���� ���մϴ�. 
        int here = qu.top().second;     // here�� �湮�� ���� ��ȣ�� ���մϴ� 

        qu.pop();

        for (int i = 0; i < arr[here].size(); i++) {
            int next = arr[here][i].first;
            int nextcost = arr[here][i].second;

            if (dist[next] > dist[here] + nextcost) {
                //���� next�� ����� dist�ǰ����� ������ ���� ���ļ� �� ��찡 
                // �Ÿ��� ��ª���� ������ �ְ� ť�� �ֽ��ϴ�. 
                dist[next] = dist[here] + nextcost;
                qu.push({ -dist[next],next });
            }
        }

    }
    for (int i = 1; i <= V; i++) {
        printf("%d\n", dist[i]);
    }
}
