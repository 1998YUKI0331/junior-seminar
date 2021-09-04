#include <iostream>
#include <algorithm>

using namespace std;

//공포도가 X인 모험가는 그룹에 X명 이상 있어야 됨

bool desc(int a, int b) { return a > b; }

int main(void) {
	int N, rhdvh[100000];
	int result = 0;

	cin >> N;
	for (int i = 0; i < N; i++) cin >> rhdvh[i];

	sort(rhdvh, rhdvh + N, desc); //내림차순 정렬

	int cur = 0; //현재 커서 위치
	while (1) {
		if (cur >= N) break;
		cur += rhdvh[cur];
		result++;
	}
	
	cout << result;
	return 0;
}
