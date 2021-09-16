# junior-seminar
주니어 세미나 수업 기록용 ᕙ(•̀‸•́‶)ᕗ

<hr/>

### sort(T.begin(), T.end())
* sort 함수는 quick sort로 구현되어 있음
* 따라서 평균 시간복잡도는 O(nlogn)
''' 
vector<pair<int, int>> TaskSet;
sort(TaskSet.begin(), TaskSet.end());
''' 
* 위처럼 pair형을 정렬하면 first로 정렬 후, second로 정렬
