/*#include <iostream>
#include<vector>
using namespace std;

#define max(x,y) x > y ? x : y

int main() {
	int P, N, M;

	cin >> P >> N >> M;

	
	vector<vector<int> > Teams;

	int total_work_cycle = 0;
	for (int i = 0; i < M; i++) {
		
		int temp = 0, deci;
		cin >> temp;
		
		total_work_cycle += temp;
		
		for (int x = 0; x < temp; x++) {
			vector<int> T_temp;
			for (int j = 0; j < 3; j++) {
				int temp0;
				cin >> temp0;
				T_temp.push_back(temp0);
			}
			Teams.push_back(T_temp);			
		}
				
	}

	int* table = new int[N];
	
	

	for (int i = 0; i < N; i++) {
		table[i] = P;
	}

	for (int i = 0; i < Teams.size(); i++) {
		for (int j = 0; j < N; j++) {
			if (Teams[i][0] == j) {
				//cout << Teams[i][0] << "< this"<<endl;
				for (int x = j; x < Teams[i][1]; x++) {
					//cout << Teams[i][2] << "<!!!!!!"<< endl;
					table[x] = table[x] + Teams[i][2];
				}				
			}
		}		
	}	
	int count = 0;


	int ret = -1000;
	int sum = 0;

	for (int i = 0; i < N; ++i) {
		for (int j = i; j < N; ++j) {
			sum += table[j];
			ret = max(ret, sum);
		}
		sum = 0;
	}

	cout << ret << endl;

	for (int i = 0; i < N; i++) {
		//cout << table[i]<<endl;
		count += table[i];

	}

	//cout << count;


}*/

/*
2 5 2
2
1 2 -1
4 5 -2
1
2 4 -2
*/