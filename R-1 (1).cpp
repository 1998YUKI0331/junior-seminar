#include <iostream>
#include <algorithm>

using namespace std;

//�������� X�� ���谡�� �׷쿡 X�� �̻� �־�� ��

bool desc(int a, int b) { return a > b; }

int main(void) {
	int N, rhdvh[100000];
	int result = 0;

	cin >> N;
	for (int i = 0; i < N; i++) cin >> rhdvh[i];

	sort(rhdvh, rhdvh + N, desc); //�������� ����

	int cur = 0; //���� Ŀ�� ��ġ
	while (1) {
		if (cur >= N) break;
		cur += rhdvh[cur];
		result++;
	}
	
	cout << result;
	return 0;
}
