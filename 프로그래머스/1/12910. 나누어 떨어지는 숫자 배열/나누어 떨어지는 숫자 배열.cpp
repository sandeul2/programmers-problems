#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    /* 1. 나누어 떨어지는 숫자 찾기 */
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] % divisor == 0) {
            answer.push_back(arr[i]);
        }
    }
    /* 2. 배열 오름차순 */
    sort(answer.begin(), answer.end());
    /* 3. 빈 배열일시 */
    if(answer.empty())
        answer.push_back(-1);
    
    return answer;
}