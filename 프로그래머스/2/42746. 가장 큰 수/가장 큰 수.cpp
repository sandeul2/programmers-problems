#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){ //정렬의 기준을 설정하는 함수
    string s1 = to_string(a) + to_string(b);
    string s2 = to_string(b) + to_string(a);
    return s1 > s2;
}

string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(), numbers.end(), cmp); //1. 큰 값으로 정렬하기
    
    for(auto& i : numbers) //2. numbers배열에서 한개씩 값에 붙이기 반복
        answer += to_string(i);

    return answer[0] == '0' ? "0" : answer; //3. 배열의 값이 0일때 가정
}