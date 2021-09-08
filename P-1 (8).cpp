#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int cost; vector<int> arr(500000);
	int result = 0; //연속된 최대 길이
	cin >> cost;
	
	int idx = 0; //arr 배열의 길이
	while (1) {
		int temp = 0; cin >> temp;
		if (temp == -1) break;
		arr[idx++] = temp;
	}

	int start = 0; int sum = 0;
	for (int end = 0; end < idx; end++) {
		cout << sum << " " << start << " " << end << endl;
		result = max(result, end - start);
		sum += arr[end];
			while (sum > cost) {
				sum -= arr[start++];
			}
		
	}

	cout << result;

	return 0;
}