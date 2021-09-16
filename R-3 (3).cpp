#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int length; //TaskSet의 길이
	vector<pair<int, int>> TaskSet;
	int X = 0; //상승된 X

	cin >> length;
	for (int i = 0; i < length; i++) {
		int tmp1, tmp2; cin >> tmp1 >> tmp2;
		TaskSet.push_back(make_pair(tmp1, tmp2));
	}

	sort(TaskSet.begin(), TaskSet.end()); //first로 정렬 후 second로 정렬
	
	int idx = 0;
	while (idx != length) {  //TaskSet의 길이 넘어가면 종료
		if (X >= TaskSet[idx].first) {
			X += TaskSet[idx].second;
			idx++;
		}
	  else break;
	}
	
	if (X == 0) X = -1;
	cout << X;

	return 0;
}
