#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
    string s1 = to_string(a) + to_string(b);
    string s2 = to_string(b) + to_string(a);
    return s1 > s2;
}

string solution(vector<int> numbers) {
    string answer = "";
    //1. 큰 값으로 정렬하기
    sort(numbers.begin(), numbers.end(), cmp);
    //2. numbers배열에서 한개씩 값에 붙이기 반복
    for(auto& i : numbers)
        answer += to_string(i);
    //3. 배열의 값이 0일때 가정
    return answer[0] == '0' ? "0" : answer;
}
