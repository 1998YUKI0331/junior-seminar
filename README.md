# junior-seminar
주니어 세미나 수업 기록용 ᕙ(•̀‸•́‶)ᕗ

<hr/>

### sort(T.begin(), T.end())
* sort 함수는 quick sort로 구현되어 있음
* 따라서 평균 시간복잡도는 O(nlogn)
```
vector<pair<int, int>> TaskSet;
sort(TaskSet.begin(), TaskSet.end());
```
* 위처럼 pair형을 정렬하면 first로 정렬 후, second로 정렬


### lower_bound(T.begin(), T.end(), val)
```
int arr[11] = { 0,1,2,3,4,5,5,5,5,6,7 };	
cout << lower_bound(arr, arr + 11, 5) - arr << endl; //5 출력
cout << upper_bound(arr, arr + 11, 5) - arr << endl; //9 출력
```
* lower bound란 정렬을 유지하며 삽입 가능한 가장 작은 인덱스
* upper bound는 반대로 삽입 가능 위치들 중 가장 큰 인덱스
