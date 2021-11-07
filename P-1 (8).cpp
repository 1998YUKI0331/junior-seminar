#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int cost; vector<int> arr;
	int result = 0; //연속된 최대 길이
	cin >> cost;

	while (1) {
		int temp = 0; cin >> temp;
		if (temp == -1) break;
		arr.push_back(temp);
	}

	int start = 0; int sum = 0;
	for (int end = 0; end < arr.size(); end++) {
		sum += arr[end];
		while (sum > cost) {
			sum -= arr[start++];
		}
		result = max(result, end - start + 1);
	}

	cout << result;

	return 0;
}
