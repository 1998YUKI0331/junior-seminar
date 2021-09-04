#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int n, A[100000], B[100000];
	int max_A = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		max_A = max(max_A, A[i]); //A 배열의 최댓값
	}

	for (int i = 0; i < n - 1; i++) {
		int temp_A = A[i]; int temp_B = max_A;
		for (int j = i + 1; j < n; j++) {
			if (temp_A < A[j] && temp_B >= A[j]) {		
				temp_B = A[j];
				B[i] = j;
			}
		}
	}

	for (int i = 0; i < n - 1; i++) cout << B[i] << " ";

	return 0;
}
