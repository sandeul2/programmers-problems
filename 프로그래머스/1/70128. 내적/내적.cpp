#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    /* 1. 배열 a,b의 내적 구하기 */
    for(int i=0; i<a.size(); i++) {
        answer += a[i] * b[i]; 
    }
    return answer;
}