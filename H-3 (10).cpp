#include <iostream>
#include <algorithm>
#include <queue>
#include <cstdio>

using namespace std;

int N, M, map[200][200], check[200][200];

int dX[4] = { 1, -1, 0, 0 };
int dY[4] = { 0, 0, 1, -1 };

void bfs(int x, int y) {
	queue <pair<int, int> > q;
	q.push(make_pair(x, y));

	check[x][y] = 1;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nextX = x + dX[i];
			int nextY = y + dY[i];

			if (0 <= nextX && nextX < N && 0 <= nextY && nextY < M) {
				if (map[nextX][nextY] && !check[nextX][nextY]) {
					check[nextX][nextY] = check[x][y] + 1;
					q.push(make_pair(nextX, nextY));
				}
				else if (map[nextX][nextY] == 0) check[nextX][nextY] = 0;
			}
		}
	}
}


int main(void) {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%1d", &map[i][j]); //공백없이 입력받기
		}
	}

	bfs(0, 0);
	cout << check[N - 1][M - 1];

	return 0;
}
