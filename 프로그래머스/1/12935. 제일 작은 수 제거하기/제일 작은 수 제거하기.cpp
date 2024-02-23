#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    /* 1. 가장 작은 수 제거 */
    arr.erase(min_element(arr.begin(),arr.end()));
    /* 2. 오류처리 */
    if(arr.size()==0) {
        arr.push_back(-1);
    }
   
    answer = arr;
    return answer;
}